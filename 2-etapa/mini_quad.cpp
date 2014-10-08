#include <TH1F.h>
#include <TFile.h>
#include <vector>
#include <TRootApplication.h>
#include <string.h>
void mini_quad(const char *inputFile){
    gSystem->Load("libDelphes");
    cout<<inputFile<<std::endl;

    char bilepton_M500_Mq400[] = "bilepton_MY500_Mq400.root";
    char bilepton_M600_Mq400[] = "bilepton_MY600_Mq400.root";
    char bilepton_M700_Mq400[] = "bilepton_M700_Mq400.root";
    char bilepton_M800_Mq400[] = "bilepton_M800_Mq400.root";
    char bilepton_M900_Mq400[] = "bilepton_M900_Mq400.root";
    char bilepton_M1000_Mq400[]="bilepton_M1000_Mq400.root";


    char bilepton_M500_Mq600[] = "bilepton_M500_Mq600.root";
    char bilepton_M600_Mq600[] = "bilepton_M600_Mq600.root";
    char bilepton_M700_Mq600[] = "bilepton_M700_Mq600.root";
    char bilepton_M800_Mq600[] = "bilepton_M800_Mq600.root";
    char bilepton_M900_Mq600[] = "bilepton_M900_Mq600.root";
    char bilepton_M1000_Mq600[]="bilepton_M1000_Mq600.root";


    char bilepton_M500_Mq800[]="bilepton_M500_Mq800.root";
    char bilepton_M600_Mq800[]="bilepton_M600_Mq800.root";
    char bilepton_M700_Mq800[]="bilepton_M700_Mq800.root";
    char bilepton_M800_Mq800[]="bilepton_M800_Mq800.root";
    char bilepton_M900_Mq800[]="bilepton_M900_Mq800.root";
    char bilepton_M1000_Mq800[]="bilepton_M1000_Mq800.root";

    char background_higss[] ="background_higss.root";
    char background_ZZ[] = "background_ZZ.root";

    bool equal = (std::strcmp(inputFile,bilepton_M500_Mq600) == 0);
    bool equal2 = (std::strcmp(inputFile,bilepton_M600_Mq600) == 0);
    bool equal3 = (std::strcmp(inputFile,bilepton_M700_Mq600) == 0);
    bool equal4 = (std::strcmp(inputFile,bilepton_M800_Mq600) == 0);
    bool equal5 = (std::strcmp(inputFile,bilepton_M900_Mq600) == 0);
    bool equal6 = (std::strcmp(inputFile,bilepton_M1000_Mq600) == 0);

    bool equal7 = (std::strcmp(inputFile,bilepton_M500_Mq400) == 0);
    bool equal8 = (std::strcmp(inputFile,bilepton_M600_Mq400) == 0);
    bool equal9 = (std::strcmp(inputFile,bilepton_M700_Mq400) == 0);
    bool equal10 = (std::strcmp(inputFile,bilepton_M800_Mq400) == 0);
    bool equal11 = (std::strcmp(inputFile,bilepton_M900_Mq400) == 0);
    bool equal12 = (std::strcmp(inputFile,bilepton_M1000_Mq400) == 0);

    bool equal13 = (std::strcmp(inputFile,bilepton_M500_Mq800) == 0);
    bool equal14 = (std::strcmp(inputFile,bilepton_M600_Mq800) == 0);
    bool equal15 = (std::strcmp(inputFile,bilepton_M700_Mq800) == 0);
    bool equal16 = (std::strcmp(inputFile,bilepton_M800_Mq800) == 0);
    bool equal17 = (std::strcmp(inputFile,bilepton_M900_Mq800) == 0);
    bool equal18 = (std::strcmp(inputFile,bilepton_M1000_Mq800) == 0);

    /*
    para MQ600
    MY500  L = 0.272  Ns= 2.06607  Nb= 0.00179121
    MY600  L = 0.535  Ns= 2.09018  Nb= 0.00195565
    MY700  L = 4.842  Ns= 2.69708  Nb= 0.00986312
    MY800  L = 37.589  Ns= 3.72455  Nb= 0.0513953
    MY900  L = 173.015  Ns= 4.94689  Nb= 0.168973
    MY1000  L = 576.419  Ns= 6.05205  Nb= 0.353857
    */

    int Ns,Nb,massa;
    if(equal){

        Ns= 2.06607;
        Nb= 0.00179121;
        massa=500;
        cout<<"M500MQ600"<<endl;
    }

    if(equal2){
        Ns= 2.09018;
        Nb= 0.00195565;
        massa=600;
        cout<<"M600MQ600"<<endl;

    }
    if(equal3){
        Ns= 2.69708;
        Nb= 0.00986312;
        massa=700;
        cout<<"M700MQ600"<<endl;
    }

    if(equal4){
        massa=800;
        Ns= 3.72455;
        Nb= 0.0513953;
        cout<<"M800MQ600"<<endl;
    }
    if(equal5){
        massa=900;
        Ns= 4.94689;
        Nb= 0.168973;
        cout<<"M900MQ600"<<endl;
    }
    if(equal6){
        massa=1000;
        Ns= 6.05205;
        Nb= 0.353857;
        cout<<"M1000MQ600"<<endl;
    }

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
    TFile *file = new TFile("events-by-Ns.root","UPDATE");

    std::vector<Muon> muonsposi;
    std::vector<Muon> muonsnega;
    char *nomesalv=(string(inputFile)+string("_Muon_Posi_InvariantMass")).c_str();
    TH1F *MuonPosiInvMass = new TH1F(nomesalv, "Cut_Muon_Posi_InvariantMass",28,100,1200);
    int NumE=1;
    std::stringstream ss;
    std::string str = ss.str();
    int totalhist=1;

    Double_t m1;
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
                //m2 = (muonsnega.at(0).P4() + muonsnega.at(1).P4()).M();

                //cuthistMuonPosiInvMass->Fill(m1);
                //cuthistMuonNegaInvMass->Fill(m2);
                // cuthistMuonInvMass->Fill(m1,m2);
                //x,1/

                if(NumE<=Ns){
                    MuonPosiInvMass->Fill(m1);
                    NumE++;
                }
                else{
                    //                    /*
                    NumE=1;
                    MuonPosiInvMass->Write();
                    delete MuonPosiInvMass;
                    ss.str("");
                    ss.clear();
                    ss << totalhist;
                    str = ss.str();
                    //                    cout<< ss<<endl;
                    totalhist++;
                    MuonPosiInvMass=new TH1F((string(nomesalv)+str).c_str(),"Muon_Posi_InvariantMass",28,100,1200);
                    MuonPosiInvMass->Fill(m1);
                    NumE++;
                }


            }

        }


        muonsnega.clear();
        muonsposi.clear();

    }

    file->Close();
}
