void lcalc(){

  // xsec
  Double_t ZZxsec=17.44;
  Double_t Higssxsec=1.076;
  Double_t MY600xsec=6.2495;
  Double_t MY1000xsec=1.7465e-02;
 
  //MY500MQ600
  // eff 2 sigma
  Double_t effMY500MQ600_2S=38481.0/50000;
  Double_t effHigsMassMY500MQ600_2S=0;  //  0/500 000
  Double_t effZZMassMY500MQ1000_2S=236.0/500000; // 

  // eff 3 sigma
  Double_t effMY500MQ600_3S=40214.0/50000;
  Double_t effHigsMassMY500MQ600_3S=0;  //  0/500 000
  Double_t effZZMassMY500MQ1000_3S=360.0/500000; // 

  // eff 4 sigma
  Double_t effMY500MQ600_4S=41032.0/50000;
  Double_t effHigsMassMY500MQ600_4S=0;  //  0/500 000
  Double_t effZZMassMY500MQ1000_4S=40421.0/500000; // 
  //-------------------------------------------------------------------

  
  // MY600MQ600
  //-------------------------------------------------------------------
  // eff 2 sigma
  Double_t effMY600MQ600_2S=39072.0/50000;
  Double_t effHigsMassMY600MQ600_2S=0;  //  0/500 000
  Double_t effZZMassMY600MQ1000_2S=131.0/500000; // 

  // eff 3 sigma
  Double_t effMY600MQ600_3S=40815.0/50000;
  Double_t effHigsMassMY600MQ600_3S=0;  //  0/500 000
  Double_t effZZMassMY600MQ1000_3S=199.0/500000; // 

  // eff 4 sigma
  Double_t effMY600MQ600_4S=41032.0/50000;
  Double_t effHigsMassMY600MQ600_4S=0;  //  0/500 000
  Double_t effZZMassMY600MQ1000_4S=271.0/500000; // 
  //-------------------------------------------------------------------

  // MY1000MQ600
  //-------------------------------------------------------------------
  // eff 2 sigma
  Double_t effMY1000MQ600_2S=37573.0/50000;
  Double_t effHigsMassMY1000MQ600_2S=0;  //  0/500 000
  Double_t effZZMassMY1000MQ1000_2S=22.0/500000; // 

  // eff 3 sigma
  Double_t effMY1000MQ600_3S=39462.0/50000;
  Double_t effHigsMassMY1000MQ600_3S=0;  //  0/500 000
  Double_t effZZMassMY1000MQ1000_3S=36.0/500000; // 

  // eff 4 sigma
  Double_t effMY1000MQ600_4S=39990.0/50000;
  Double_t effHigsMassMY1000MQ600_4S=0;  //  0/500 000
  Double_t effZZMassMY1000MQ1000_4S=52.0/500000; // 
  //-------------------------------------------------------------------
  

  Double_t effTrigger = 0.8;
    
  // Luminosidade
  Double_t L=0;
  Double_t Ns=0;
  Double_t Nb=0;

  Double_t S=0;
  Double_t f1=0;
  Double_t f2=0;
  //cout<< ZZxsec << endl;
  //cout<< effZZMassMY600MQ1000_2S << endl;

  // para 2*sigma
  
  gr = new TGraph(10);
  gr->SetLineColor(2);
  gr->SetLineWidth(4);
  gr->SetMarkerColor(4);
  gr->SetMarkerStyle(21);
  gr->SetTitle("Luminosidade para 2 sigma");
  gr->GetXaxis()->SetTitle("MY");
  gr->GetYaxis()->SetTitle("L");
  //gr->SetMinimum(0.5);
  gr->SetMaximum(100);

  gr2= new TGraph(10);
  gr2->SetLineColor(5);
  gr2->SetLineWidth(4);
  gr2->SetMarkerColor(4);
  gr2->SetMarkerStyle(21);
  gr2->SetTitle("Luminosidade para 4 sigma");
  gr2->GetXaxis()->SetTitle("MY");
  gr2->GetYaxis()->SetTitle("L");
  //gr2->SetMinimum(0.5);
  gr2->SetMaximum(100);

  
  //para 2 sigma
  cout<< "para 2*sigma"<<endl;  // para este sigma estou fazendo o grafico, mas não para os demais
  //MY500
  for(L=0.1;L<2;L=L+0.00001){
    Ns=MY600xsec *effMY500MQ600_2S * effTrigger *L;
    Nb= (Higssxsec* effHigsMassMY500MQ600_2S* effTrigger *L) +(ZZxsec* effZZMassMY500MQ1000_2S * effTrigger *L);
  

    //S= sqrt(  2*( (Ns+Nb) * log(1+(Ns/Nb)) - Ns)    );
    f2= log(1+(Ns/Nb));
    f1= 2*(((Ns+Nb)*f2)-Ns);
    S= sqrt(f1);
    
    if(S>5){
      //cout<<"valor de S = " <<S<<endl;
      //cout<<"vaor de  L = "<< L<<endl;
      gr->SetPoint(1,500,L);
      break;
    }
  }


  //MY600
  for(L=0.1;L<2;L=L+0.00001){
    Ns=MY600xsec *effMY600MQ600_2S * effTrigger *L;
    Nb= (Higssxsec* effHigsMassMY600MQ600_2S* effTrigger *L) +(ZZxsec* effZZMassMY600MQ1000_2S * effTrigger *L);
  

    //S= sqrt(  2*( (Ns+Nb) * log(1+(Ns/Nb)) - Ns)    );
    f2= log(1+(Ns/Nb));
    f1= 2*(((Ns+Nb)*f2)-Ns);
    S= sqrt(f1);
    
    if(S>5){
      cout<<"valor de S = " <<S<<endl;
      cout<<"vaor de  L = "<< L<<endl;
      gr->SetPoint(2,600,L);
      break;
    }
  }
  // MY1000
  for(L=0.1;L<2;L=L+0.00001){
    Ns=MY600xsec *effMY1000MQ600_2S* effTrigger *L;
    Nb= (Higssxsec* effHigsMassMY1000MQ600_2S* effTrigger *L) +(ZZxsec* effZZMassMY1000MQ1000_2S * effTrigger *L);
  

    //S= sqrt(  2*( (Ns+Nb) * log(1+(Ns/Nb)) - Ns)    );
    f2= log(1+(Ns/Nb));
    f1= 2*(((Ns+Nb)*f2)-Ns);
    S= sqrt(f1);
    
    if(S>5){
      //cout<<"valor de S = " <<S<<endl;
      //cout<<"vaor de  L = "<< L<<endl;
      gr->SetPoint(3,1000,L);
      break;
    }
  }


  // para 3*sigma
  cout<< "para 3*sigma"<<endl;
  for(L=0.1;L<2;L=L+0.00001){
    Ns=MY600xsec *effMY600MQ600_3S * effTrigger *L;
    Nb= (Higssxsec* effHigsMassMY600MQ600_3S* effTrigger *L) +(ZZxsec* effZZMassMY600MQ1000_3S * effTrigger *L);
  

    //S= sqrt(  2*( (Ns+Nb) * log(1+(Ns/Nb)) - Ns)    );
    f2= log(1+(Ns/Nb));
    f1= 2*(((Ns+Nb)*f2)-Ns);
    S= sqrt(f1);
    
    if(S>5){
      cout<<"valor de S = " <<S<<endl;
      cout<<"vaor de  L = "<< L<<endl;
      break;
    }
  }
  // para 4*sigma
  cout<< "para 4*sigma"<<endl;
  for(L=0.1;L<2;L=L+0.00001){
    Ns=MY600xsec *effMY600MQ600_4S * effTrigger *L;
    Nb= (Higssxsec* effHigsMassMY600MQ600_4S* effTrigger *L) +(ZZxsec* effZZMassMY600MQ1000_4S * effTrigger *L);
  

    //S= sqrt(  2*( (Ns+Nb) * log(1+(Ns/Nb)) - Ns)    );
    f2= log(1+(Ns/Nb));
    f1= 2*(((Ns+Nb)*f2)-Ns);
    S= sqrt(f1);
    
    if(S>5){
      cout<<"valor de S = " <<S<<endl;
      cout<<"vaor de  L = "<< L<<endl;
      gr2->SetPoint(1,600,L);
      break;
    }
  
    //cout<< Ns<<endl;
    //cout<< Nb<<endl;
    //cout << (ZZxsec* effZZMassMY600MQ1000_2S * effTrigger *L)<< endl;
    
  }
  //gr->Draw("AP");
  gr->Draw("ACP");
  gr2->Draw("same");
  //  gr->Draw();
}
