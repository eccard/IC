void mq600(){
  // calculando L com a equação S
  // xsec
  Double_t ZZxsec= 17.44;
  Double_t Higssxsec= 1.076;
  Double_t MY500xsec= 1.2337e+01;
  Double_t MY600xsec= 6.2495;
  Double_t MY700xsec= 9.0002e-01;
  Double_t MY800xsec= 1.6188e-01;
  Double_t MY900xsec= 4.7157e-02;
  Double_t MY1000xsec= 1.7465e-02;
 
  //MY500MQ600
  // eff 2 sigma
  Double_t effMY500MQ600_2S= 38481.0/50000;
  Double_t effHigsMassMY500MQ600_2S= 0;  //  0/500 000
  Double_t effZZMassMY500MQ600_2S= 236.0/500000;  // 

  // eff 3 sigma
  Double_t effMY500MQ600_3S= 40214.0/50000;
  Double_t effHigsMassMY500MQ600_3S= 0;  //  0/500 000
  Double_t effZZMassMY500MQ600_3S= 360.0/500000; // 

  // eff 4 sigma
  Double_t effMY500MQ600_4S= 40421.0/50000;
  Double_t effHigsMassMY500MQ600_4S= 0;  //  0/500 000
  Double_t effZZMassMY500MQ600_4S= 472.0/500000; // 
  //-------------------------------------------------------------------

  
  // MY600MQ600
  //-------------------------------------------------------------------
  // eff 2 sigma
  Double_t effMY600MQ600_2S= 39072.0/50000;
  Double_t effHigsMassMY600MQ600_2S= 0;  //  0/500 000
  Double_t effZZMassMY600MQ600_2S= 131.0/500000; // 

  // eff 3 sigma
  Double_t effMY600MQ600_3S= 40815.0/50000;
  Double_t effHigsMassMY600MQ600_3S= 0;  //  0/500 000
  Double_t effZZMassMY600MQ600_3S= 199.0/500000; // 

  // eff 4 sigma
  Double_t effMY600MQ600_4S= 41032.0/50000;
  Double_t effHigsMassMY600MQ600_4S= 0;  //  0/500 000
  Double_t effZZMassMY600MQ600_4S= 271.0/500000; // 
  //-------------------------------------------------------------------


    // MY700MQ600
  //-------------------------------------------------------------------
  // eff 2 sigma
  Double_t effMY700MQ600_2S= 38681.0/50000;
  Double_t effHigsMassMY700MQ600_2S= 0;  //  0/500 000
  Double_t effZZMassMY700MQ600_2S= 73.0/500000; // 

  // eff 3 sigma
  Double_t effMY700MQ600_3S= 40480.0/50000;
  Double_t effHigsMassMY700MQ600_3S= 0;  //  0/500 000
  Double_t effZZMassMY700MQ600_3S= 119.0/500000; // 

  // eff 4 sigma
  Double_t effMY700MQ600_4S= 40756.0/50000;
  Double_t effHigsMassMY700MQ600_4S= 0;  //  0/500 000
  Double_t effZZMassMY700MQ600_4S= 170.0/500000; // 
  //-------------------------------------------------------------------


    // MY800MQ600
  //-------------------------------------------------------------------
  // eff 2 sigma
  Double_t effMY800MQ600_2S= 38256.0/50000;
  Double_t effHigsMassMY800MQ600_2S= 0;  //  0/500 000
  Double_t effZZMassMY800MQ600_2S= 49.0/500000; // 

  // eff 3 sigma
  Double_t effMY800MQ600_3S= 40113.0/50000;
  Double_t effHigsMassMY800MQ600_3S= 0;  //  0/500 000
  Double_t effZZMassMY800MQ600_3S= 82.0/500000; // 

  // eff 4 sigma
  Double_t effMY800MQ600_4S= 40499.0/50000;
  Double_t effHigsMassMY800MQ600_4S= 0;  //  0/500 000
  Double_t effZZMassMY800MQ600_4S= 109.0/500000; // 
  //-------------------------------------------------------------------

   // MY900MQ600
  //-------------------------------------------------------------------
  // eff 2 sigma
  Double_t effMY900MQ600_2S= 37895.0/50000;
  Double_t effHigsMassMY900MQ600_2S= 0;  //  0/500 000
  Double_t effZZMassMY900MQ600_2S= 35.0/500000; // 

  // eff 3 sigma
  Double_t effMY900MQ600_3S= 39769.0/50000;
  Double_t effHigsMassMY900MQ600_3S= 0;  //  0/500 000
  Double_t effZZMassMY900MQ600_3S= 54.0/500000; // 

  // eff 4 sigma
  Double_t effMY900MQ600_4S= 40241.0/50000;
  Double_t effHigsMassMY900MQ600_4S= 0;  //  0/500 000
  Double_t effZZMassMY900MQ600_4S= 73.0/500000; // 
  //-------------------------------------------------------------------


  
  // MY1000MQ600
  //-------------------------------------------------------------------
  // eff 2 sigma
  Double_t effMY1000MQ600_2S=37573.0/50000;
  Double_t effHigsMassMY1000MQ600_2S=0;  //  0/500 000
  Double_t effZZMassMY1000MQ600_2S=22.0/500000; // 

  // eff 3 sigma
  Double_t effMY1000MQ600_3S=39462.0/50000;
  Double_t effHigsMassMY1000MQ600_3S=0;  //  0/500 000
  Double_t effZZMassMY1000MQ600_3S=36.0/500000; // 

  // eff 4 sigma
  Double_t effMY1000MQ600_4S=39990.0/50000;
  Double_t effHigsMassMY1000MQ600_4S=0;  //  0/500 000
  Double_t effZZMassMY1000MQ600_4S=52.0/500000; // 
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
  //cout<< effZZMassMY600MQ600_2S << endl;

  // para 2*sigma
  
  
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

  Double_t y[6];
  Double_t x[6]={500,600,700,800,900,1000};
  
  //para 2 sigma
  cout<< "para 2*sigma"<<endl;  // para este sigma estou fazendo o grafico, mas não para os demais

  //MY500
  for(L=0.1;L<5;L=L+0.001){
    Ns=MY500xsec *effMY500MQ600_2S * effTrigger *L;
    Nb= (Higssxsec* effHigsMassMY500MQ600_2S* effTrigger *L) +(ZZxsec* effZZMassMY500MQ600_2S * effTrigger *L);
  

    S= sqrt(  2*( (Ns+Nb) * log(1+(Ns/Nb)) - Ns)    );
    if(S>5){
      cout<<"MY500  "<<"L = "<< L<< endl;
      //gr->SetPoint(1,500,L);
      y[0]=L;
      break;
    }
     
  }


  
  //MY600
    for(L=0.1;L<5;L=L+0.001){
    Ns=MY600xsec *effMY600MQ600_2S * effTrigger *L;
    Nb= (Higssxsec* effHigsMassMY600MQ600_2S* effTrigger *L) +(ZZxsec* effZZMassMY600MQ600_2S * effTrigger *L);
  

    S= sqrt(  2*( (Ns+Nb) * log(1+(Ns/Nb)) - Ns)    );
        
     if(S>5){ 
       cout<<"MY600  "<<"L = "<< L << endl; 
       //gr->SetPoint(2,600,L);
       y[1]=L;
       break; 
     } 
  }


  //MY700
    for(L=0.1;L<1000;L=L+0.001){
      Ns=MY700xsec *effMY700MQ600_2S * effTrigger *L;
      Nb= (Higssxsec* effHigsMassMY700MQ600_2S* effTrigger *L) +(ZZxsec* effZZMassMY700MQ600_2S * effTrigger *L);
  

      S= sqrt(  2*( (Ns+Nb) * log(1+(Ns/Nb)) - Ns)    );
        
      if(S>5){
        cout<<"MY700  "<<"L = "<< L << endl; 
        //gr->SetPoint(3,700,L);
        y[2]=L;
        break; 
      } 
    }

    //MY800
    for(L=0.1;L<10000;L=L+0.001){
      Ns=MY800xsec *effMY800MQ600_2S * effTrigger *L;
      Nb= (Higssxsec* effHigsMassMY800MQ600_2S* effTrigger *L) +(ZZxsec* effZZMassMY800MQ600_2S * effTrigger *L);
  

      S= sqrt(  2*( (Ns+Nb) * log(1+(Ns/Nb)) - Ns)    );
    
      if(S>5){
         cout<<"MY800  "<<"L = "<< L << endl; 
         //gr->SetPoint(4,800,L);
         y[3]=L;
         break; 
       } 

    }

    //MY900
    for(L=0.1;L<10000;L=L+0.001){
      Ns=MY900xsec *effMY900MQ600_2S * effTrigger *L;
      Nb= (Higssxsec* effHigsMassMY900MQ600_2S* effTrigger *L) +(ZZxsec* effZZMassMY900MQ600_2S * effTrigger *L);
  

      S= sqrt(  2*( (Ns+Nb) * log(1+(Ns/Nb)) - Ns)    );
        
      if(S>5){
        cout<<"MY900  "<<"L = "<< L << endl; 
        //gr->SetPoint(5,900,L);
        y[4]=L;
        break; 
      } 
    }

   
    // MY1000

    for(L=1;L<10000;L=L+0.001){
    Ns=MY1000xsec *effMY1000MQ600_2S* effTrigger *L;
    Nb= (Higssxsec* effHigsMassMY1000MQ600_2S* effTrigger *L) +(ZZxsec* effZZMassMY1000MQ600_2S * effTrigger *L);


    S= sqrt(  2*( (Ns+Nb) * log(1+(Ns/Nb)) - Ns)    );
    
     if(S>5){ 
       cout<<"MY1000  "<<"L = "<< L << endl; 
       //gr->SetPoint(6,1000,L);
       y[5]=L;
       break; 
     } 
    
    }

    /*
  // para 3*sigma
  cout<< "para 3*sigma"<<endl;
  for(L=0.1;L<2;L=L+0.00001){
    Ns=MY600xsec *effMY600MQ600_3S * effTrigger *L;
    Nb= (Higssxsec* effHigsMassMY600MQ600_3S* effTrigger *L) +(ZZxsec* effZZMassMY600MQ600_3S * effTrigger *L);
  

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
    Nb= (Higssxsec* effHigsMassMY600MQ600_4S* effTrigger *L) +(ZZxsec* effZZMassMY600MQ600_4S * effTrigger *L);
  

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
    //cout << (ZZxsec* effZZMassMY600MQ600_2S * effTrigger *L)<< endl;
    
  }
  */

    
    
    TGraph *gr = new TGraph(6,x,y);
    gr->SetLineColor(2);
    gr->SetLineWidth(4);
    gr->SetMarkerColor(4);
    gr->SetMarkerStyle(21);
    gr->SetTitle("Luminosidade para 2 sigma");
    gr->GetXaxis()->SetTitle("MY");
    gr->GetYaxis()->SetTitle("L");
    //gr->SetMinimum(0.5);
    gr->SetMaximum(1000);
    gr->SetMinimum(0.01);

    
    //gr->Draw("AP");
     gr->Draw("ACP");
    //gr->Draw("ACP");
     //gr->Draw("alp");
    gPad->SetLogy();
    //c1->SetLogy();
    // c1->Update();
    // gr->Draw("ACP");
  //  gr2->Draw("same");
  //  gr->Draw();
}
