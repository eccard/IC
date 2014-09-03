/*
  root -l examples/Example1.C\(\"delphes_output.root\"\)

  bilepton_M500_Mq600.rootcut_muon_Posi_InvariantMass   sigma ->  17.258
  bilepton_M600_Mq600.rootcut_muon_Posi_InvariantMass   sigma ->  20.8441
  bilepton_M800_Mq600.rootcut_muon_Posi_InvariantMass   sigma ->  30.3487  
  bilepton_M1000_Mq600.rootcut_muon_Posi_InvariantMass   sigma ->  41.5338
  background_higss.rootcut_muon_Posi_InvariantMass   sigma ->  14.5983
  background_ZZ.rootcut_muon_Posi_InvariantMass   sigma ->  52.6219


*/
//------------------------------------------------------------------------------
//#include<TLorentzVector>
#include<vector>
#include <exception>
using namespace std;
void background(const char *inputFile,Int_t massa,Double_t sigma);
void masscut(const char *inputFile)
{
  gSystem->Load("libDelphes");
    
  Double_t sigmaMY500MQ600=17.258;
  Double_t sigmaMY600MQ600=20.8441;
  Double_t sigmaMY800MQ600=41.5338;
  Double_t sigmaMY1000MQ600=41.5338;
  Double_t sigmaBackHigss=14.5983;
  Double_t sigmaBackZZ=52.6219;
  Int_t massa=0;

  
  // valor vai alterar....
  Double_t sigma =0;
  
  
  char bilepton_M500_Mq600[] = "bilepton_M500_Mq600.root";
  char bilepton_M600_Mq600[] = "bilepton_M600_Mq600.root";
  char bilepton_M800_Mq600[] = "bilepton_M800_Mq600.root";
  char bilepton_M1000_Mq600[]="bilepton_M1000_Mq600.root";
  char background_higss[] ="background_higss.root";
  char background_ZZ[] = "background_ZZ.root"; 
  
  bool equal = (std::strcmp(inputFile,bilepton_M600_Mq600) == 0);
  bool equal2 = (std::strcmp(inputFile,bilepton_M1000_Mq600) == 0);
  bool equal3 = (std::strcmp(inputFile,bilepton_M500_Mq600) == 0);
  bool equal4 = (std::strcmp(inputFile,bilepton_M800_Mq600) == 0);

  if(equal){
    massa=600;
    sigma =sigmaMY600MQ600;
    cout<<"massa de 600"<<endl; 
    background(background_higss,600,sigma);
    background(background_ZZ,600,sigma);

  
  }
  if(equal2){
    massa=1000;
    sigma =sigmaMY1000MQ600;
    cout<<"massa de 1000"<<endl;
    background(background_higss,1000,sigma);
    background(background_ZZ,1000,sigma);

  }
  
  if(equal3){
    massa=500;
    sigma =sigmaMY500MQ600;
    cout<<"massa de 500"<<endl;
    background(background_higss,500,sigma);
    background(background_ZZ,500,sigma);
  }
 if(equal4){
    massa=800;
    sigma =sigmaMY800MQ600;
    cout<<"massa de 800"<<endl;
    background(background_higss,500,sigma);
    background(background_ZZ,500,sigma);
  }


  int totaleventos2sigma=0;
  int totaleventos3sigma=0;
  int totaleventos4sigma=0;

  // Create chain of root trees
  TChain chain("Delphes");
  chain.Add(inputFile);

  // Create object of class ExRootTreeReader
  ExRootTreeReader *treeReader = new ExRootTreeReader(&chain);
  Long64_t numberOfEntries = treeReader->GetEntries();

  // Get pointers to branches used in this analysis
  TClonesArray *branchJet = treeReader->UseBranch("Jet");
  //TClonesArray *branchElectron = treeReader->UseBranch("Electron");
  TClonesArray *branchMuon = treeReader->UseBranch("Muon");
  TClonesArray *branchParticle = treeReader->UseBranch("Particle");


  std::vector<Muon> muonsposi;
  std::vector<Muon> muonsnega;

  double m1,m2;

		
  // Loop over all events
  for(Int_t entry = 0; entry < numberOfEntries; ++entry)
    {
      // Load selected branches with data from specified event
      treeReader->ReadEntry(entry);

	
      if(branchMuon->GetEntries() > 0)
	{
	  for (int i=0; i<branchMuon->GetEntries();i++){
	    Muon *muon = (Muon*) branchMuon->At(i);
	    if(muon->Charge == 1){
	      Muon *novo= muon;
	      muonsposi.push_back(*novo);
	    }
	    else
	      if(muon->Charge == -1){
		Muon *novo= muon;
		muonsnega.push_back(*novo);
	      }
	  }

	  if(((muonsposi.size()) >= 2) && ((muonsnega.size()) >=2)){

	    for(int k=0;k<muonsposi.size();k++){
	      if(fabs(muonsposi.at(k).Eta) > 2.5){
		muonsposi.erase(muonsposi.begin()+k);

	      }
	      else
		if((muonsposi.at(k).PT) < 20.0){
		  muonsposi.erase(muonsposi.begin()+k);
		}


	    }

	    for(int k=0;k<muonsnega.size();k++){
	      if(fabs(muonsnega.at(k).Eta) > 2.5){
		muonsnega.erase(muonsnega.begin()+k);
	      }
	      else
		if((muonsnega.at(k).PT) < 20.0){
		  muonsnega.erase(muonsnega.begin()+k);

		}

	    }

	  } // fim dos cortes

	  // histogramas
	  if(((muonsposi.size()) == 2) && ((muonsnega.size()) ==2)){
	    	    
	    m1 = (muonsposi.at(0).P4() + muonsposi.at(1).P4()).M();
	    m2 = (muonsnega.at(0).P4() + muonsnega.at(1).P4()).M();

	    //cuthistMuonPosiInvMass->Fill(m1);
	    //cuthistMuonNegaInvMass->Fill(m2);
	    // cuthistMuonInvMass->Fill(m1,m2);
	    //x,1/
	    
	    // corte no massa invariante dentro do range de 2xsigma, 3xsigma,4xsigma
	    if(    (m1>(massa-(2*sigma)))   &&   (m1<(massa+(2*sigma)))    ){
	      totaleventos2sigma++;
	    }

	    if(    (m1>(massa-(3*sigma)))   &&   (m1<(massa+(3*sigma)))    ){
	      totaleventos3sigma++;
	    }

	    if(    (m1>(massa-(4*sigma)))   &&   (m1<(massa+(4*sigma)))    ){
	      totaleventos4sigma++;
	    }

	  }
	  
	}

     
      muonsnega.clear();
      muonsposi.clear();

    }
  

  std::ofstream o("quantidadeDeEventosCorteNaMassaEntreSigma.txt",std::ios_base::app | std::ios_base::out);
  o<< " " <<endl;
  o<< "Informações sobre o Ns correspondente ao arquivo "<< inputFile << endl;
  o<<"eventos do sinal entre "<<massa<<"-(2*"<<sigma<<") e "<<massa<<"+(2*"<<sigma<<")"<<endl;
  o<<" Nb 2*sigma ="<<totaleventos2sigma <<endl;

  o<<"eventos do background entre "<<massa<<"-(3*"<<sigma<<") e "<<massa<<"+(3*"<<sigma<<")"<<endl;
  o<<" Nb 3*sigma ="<< totaleventos3sigma<<endl;

  o<<"eventos do background entre "<<massa<<"-(4*"<<sigma<<") e "<<massa<<"+(4*"<<sigma<<")"<<endl;
  o<<" Nb 4*sigma ="<< totaleventos4sigma<<endl;

  o<< "______________________________________________________________________________________________"<<endl;
  o<<" "<<endl;
  o.close();

  cout <<"."<< endl;
}


//cuthistMuonPosiInvMass->Fit("gaus");
//cuthistMuonPosiInvMass->GetFunction("gaus")->GetParameter(2);

void background(const char *inputFile,Int_t massab,Double_t sigmab)
{

  gSystem->Load("libDelphes");
  
  /*
    Double_t sigmaMY600MQ600=20.8441;
    Double_t sigmaMY1000MQ600=41.5338;
    Double_t sigmaBackHigss=14.5983;
    Double_t sigmaBackZZ=52.6219;
    Int_t massa=0;

  
    // valor vai alterar....
    /*  Double_t sigma =sigmaMY600MQ600;
  
  

    char background_higss[] = "background_higss.root";
    char background_ZZ[] = "background_ZZ.root"; 
  
    bool equal3 = (std::strcmp(inputFile,background_higss) == 0);
    bool equal4 = (std::strcmp(inputFile,background_ZZ) == 0);

    if(equal3){massa=600; cout<<"massa de 600"<<endl; }
    if(equal4){massa=1000; cout<<"massa de 1000"<<endl;}
  */
  

  int totaleventos2sigmab=0;
  int totaleventos3sigmab=0;
  int totaleventos4sigmab=0;

  // Create chain of root trees
  TChain chain("Delphes");
  chain.Add(inputFile);

  // Create object of class ExRootTreeReader
  ExRootTreeReader *treeReader = new ExRootTreeReader(&chain);
  Long64_t numberOfEntries = treeReader->GetEntries();

  // Get pointers to branches used in this analysis
  TClonesArray *branchJet = treeReader->UseBranch("Jet");
  //TClonesArray *branchElectron = treeReader->UseBranch("Electron");
  TClonesArray *branchMuon = treeReader->UseBranch("Muon");
  TClonesArray *branchParticle = treeReader->UseBranch("Particle");


  std::vector<Muon> muonsposib;
  std::vector<Muon> muonsnegab;

  double m1,m2;

		
  // Loop over all events
  for(Int_t entry = 0; entry < numberOfEntries; ++entry)
    {
      // Load selected branches with data from specified event
      treeReader->ReadEntry(entry);

	
      if(branchMuon->GetEntries() > 0)
	{
	  for (int i=0; i<branchMuon->GetEntries();i++){
	    Muon *muon = (Muon*) branchMuon->At(i);
	    if(muon->Charge == 1){
	      Muon *novo= muon;
	      muonsposib.push_back(*novo);
	    }
	    else
	      if(muon->Charge == -1){
		Muon *novo= muon;
		muonsnegab.push_back(*novo);
	      }
	  }

	  if(((muonsposib.size()) >= 2) && ((muonsnegab.size()) >=2)){

	    for(int k=0;k<muonsposib.size();k++){
	      if(fabs(muonsposib.at(k).Eta) > 2.5){
		muonsposib.erase(muonsposib.begin()+k);

	      }
	      else
		if((muonsposib.at(k).PT) < 20.0){
		  muonsposib.erase(muonsposib.begin()+k);
		}


	    }

	    for(int k=0;k<muonsnegab.size();k++){
	      if(fabs(muonsnegab.at(k).Eta) > 2.5){
		muonsnegab.erase(muonsnegab.begin()+k);
	      }
	      else
		if((muonsnegab.at(k).PT) < 20.0){
		  muonsnegab.erase(muonsnegab.begin()+k);

		}

	    }

	  } // fim dos cortes

	  // histogramas
	  if(((muonsposib.size()) == 2) && ((muonsnegab.size()) ==2)){
	    	    
	    m1 = (muonsposib.at(0).P4() + muonsposib.at(1).P4()).M();
	    m2 = (muonsnegab.at(0).P4() + muonsnegab.at(1).P4()).M();

	    //cuthistMuonPosiInvMass->Fill(m1);
	    //cuthistMuonNegaInvMass->Fill(m2);
	    // cuthistMuonInvMass->Fill(m1,m2);
	    //x,1/
	    
	    // corte no massa invariante dentro do range de 2xsigma, 3xsigma,4xsigma
	    if(    (m1>(massab-(2*sigmab)))   &&   (m1<(massab+(2*sigmab)))    ){
	      totaleventos2sigmab++;
	    }

	    if(    (m1>(massab-(3*sigmab)))   &&   (m1<(massab+(3*sigmab)))    ){
	      totaleventos3sigmab++;
	    }

	    if(    (m1>(massab-(4*sigmab)))   &&   (m1<(massab+(4*sigmab)))    ){
	      totaleventos4sigmab++;
	    }

	  }
	  
	}

     
      muonsnegab.clear();
      muonsposib.clear();

    }
  

  
  std::ofstream o("quantidadeDeEventosCorteNaMassaEntreSigma.txt",std::ios_base::app | std::ios_base::out);
  o<< "Informações sobre o Nb correspondente ao arquivo "<< inputFile <<endl;
  o<<"eventos do background entre "<<massab<<"-(2*"<<sigmab<<") e "<<massab<<"+(2*"<<sigmab<<")"<<endl;
  o<<" Nb 2*sigma ="<<totaleventos2sigmab <<endl;

  o<<"eventos do background entre "<<massab<<"-(3*"<<sigmab<<") e "<<massab<<"+(3*"<<sigmab<<")"<<endl;
  o<<" Nb 3*sigma ="<< totaleventos3sigmab<<endl;

  o<<"eventos do background entre "<<massab<<"-(4*"<<sigmab<<") e "<<massab<<"+(4*"<<sigmab<<")"<<endl;
  o<<" Nb 4*sigma ="<< totaleventos4sigmab<<endl;

  o<< "----------------------------------------------------------------------------"<<endl;
  o.close();

  cout <<"."<< endl;
}
