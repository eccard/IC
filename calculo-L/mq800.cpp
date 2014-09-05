void mq800(){
  // calculando L com a equação S
  // xsec
  // para MQ400
  Double_t ZZxsec= 17.44;
  Double_t Higssxsec= 1.076;
  Double_t MY500xsec= 1.1637e+01;
  Double_t MY600xsec= 5.9342e+00;
  Double_t MY700xsec= 3.1848e+00;
  Double_t MY800xsec= 1.7649e+00;
  Double_t MY900xsec= 3.9211e-01;
  Double_t MY1000xsec= 7.9179e-02;
 
  //MY500MQ600
  // eff 2 sigma
  Double_t effMY500MQ800_2S= 38896.0/50000;
  Double_t effHigsMassMY500MQ800_2S= 0;  //  0/500 000
  Double_t effZZMassMY500MQ800_2S= 237.0/500000;  // 

  // eff 3 sigma
  Double_t effMY500MQ800_3S= 40700.0/50000;
  Double_t effHigsMassMY500MQ800_3S= 0;  //  0/500 000
  Double_t effZZMassMY500MQ800_3S= 360.0/500000; // 

  // eff 4 sigma
  Double_t effMY500MQ800_4S= 40901.0/50000;
  Double_t effHigsMassMY500MQ800_4S= 0;  //  0/500 000
  Double_t effZZMassMY500MQ800_4S= 473.0/500000; // 
  //-------------------------------------------------------------------

  
  // MY600MQ600
  //-------------------------------------------------------------------
  // eff 2 sigma
  Double_t effMY600MQ800_2S= 39136.0/50000;
  Double_t effHigsMassMY600MQ800_2S= 0;  //  0/500 000
  Double_t effZZMassMY600MQ800_2S= 132.0/500000; // 

  // eff 3 sigma
  Double_t effMY600MQ800_3S= 40920.0/50000;
  Double_t effHigsMassMY600MQ800_3S= 0;  //  0/500 000
  Double_t effZZMassMY600MQ800_3S= 200.0/500000; // 

  // eff 4 sigma
  Double_t effMY600MQ800_4S= 41112.0/50000;
  Double_t effHigsMassMY600MQ800_4S= 0;  //  0/500 000
  Double_t effZZMassMY600MQ800_4S= 271.0/500000; // 
  //-------------------------------------------------------------------


    // MY700MQ600
  //-------------------------------------------------------------------
  // eff 2 sigma
  Double_t effMY700MQ800_2S= 39189.0/50000;
  Double_t effHigsMassMY700MQ800_2S= 0;  //  0/500 000
  Double_t effZZMassMY700MQ800_2S= 70.0/500000; // 

  // eff 3 sigma
  Double_t effMY700MQ800_3S= 40965.0/50000;
  Double_t effHigsMassMY700MQ800_3S= 0;  //  0/500 000
  Double_t effZZMassMY700MQ800_3S= 114.0/500000; // 

  // eff 4 sigma
  Double_t effMY700MQ800_4S= 41182.0/50000;
  Double_t effHigsMassMY600MQ800_4S= 0;  //  0/500 000
  Double_t effZZMassMY700MQ800_4S= 157.0/500000; // 
  //-------------------------------------------------------------------


    // MY800MQ600
  //-------------------------------------------------------------------
  // eff 2 sigma
  Double_t effMY800MQ800_2S= 39204.0/50000;
  Double_t effHigsMassMY800MQ800_2S= 0;  //  0/500 000
  Double_t effZZMassMY800MQ800_2S= 42.0/500000; // 

  // eff 3 sigma
  Double_t effMY800MQ800_3S= 40975.0/50000;
  Double_t effHigsMassMY800MQ800_3S= 0;  //  0/500 000
  Double_t effZZMassMY800MQ400_3S= 72.0/500000; // 

  // eff 4 sigma
  Double_t effMY800MQ800_4S= 41205.0/50000;
  Double_t effHigsMassMY800MQ800_4S= 0;  //  0/500 000
  Double_t effZZMassMY800MQ800_4S= 103.0/500000; // 
  //-------------------------------------------------------------------

   // MY900MQ600
  //-------------------------------------------------------------------
  // eff 2 sigma
  Double_t effMY900MQ800_2S= 39041.0/50000;
  Double_t effHigsMassMY900MQ800_2S= 0;  //  0/500 000
  Double_t effZZMassMY900MQ800_2S= 33.0/500000; // 

  // eff 3 sigma
  Double_t effMY900MQ800_3S= 40749.0/50000;
  Double_t effHigsMassMY900MQ800_3S= 0;  //  0/500 000
  Double_t effZZMassMY900MQ800_3S= 47.0/500000; // 

  // eff 4 sigma
  Double_t effMY900MQ800_4S= 41003.0/50000;
  Double_t effHigsMassMY900MQ800_4S= 0;  //  0/500 000
  Double_t effZZMassMY900MQ800_4S= 67.0/500000; // 
  //-------------------------------------------------------------------


  
  // MY1000MQ600
  //-------------------------------------------------------------------
  // eff 2 sigma
  Double_t effMY1000MQ800_2S=38515.0/50000;
  Double_t effHigsMassMY1000MQ800_2S=0;  //  0/500 000
  Double_t effZZMassMY1000MQ800_2S=21.0/500000; // 

  // eff 3 sigma
  Double_t effMY1000MQ800_3S=40310.0/50000;
  Double_t effHigsMassMY1000MQ800_3S=0;  //  0/500 000
  Double_t effZZMassMY1000MQ800_3S=33.0/500000; // 

  // eff 4 sigma
  Double_t effMY1000MQ800_4S=40645.0/50000;
  Double_t effHigsMassMY1000MQ800_4S=0;  //  0/500 000
  Double_t effZZMassMY1000MQ800_4S=48.0/500000; // 
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
  //cout<< effZZMassMY600MQ400_2S << endl;

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
  gr2->SetMaximum(1000);

  Double_t y[6];
  Double_t x[6]={500,600,700,800,900,1000};
  
  //para 2 sigma
  cout<< "para 2*sigma"<<endl;  // para este sigma estou fazendo o grafico, mas não para os demais

  //MY500
  for(L=0.1;L<5;L=L+0.001){
    Ns=MY500xsec *effMY500MQ800_2S * effTrigger *L;
    Nb= (Higssxsec* effHigsMassMY500MQ800_2S* effTrigger *L) +(ZZxsec* effZZMassMY500MQ800_2S * effTrigger *L);
  

    S= sqrt(  2*( (Ns+Nb) * log(1+(Ns/Nb)) - Ns)    );
    if(S>5){
      cout<<"MY500  "<<"L = "<< L<< endl;
      //gr->SetPoint(1,500,L);
      y[0]=L;
      break;
    }
     
  }


  
  //MY600
    for(L=0.1;L<100;L=L+0.001){
    Ns=MY600xsec *effMY600MQ800_2S * effTrigger *L;
    Nb= (Higssxsec* effHigsMassMY600MQ800_2S* effTrigger *L) +(ZZxsec* effZZMassMY600MQ800_2S * effTrigger *L);
  

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
      Ns=MY700xsec *effMY700MQ800_2S * effTrigger *L;
      Nb= (Higssxsec* effHigsMassMY700MQ800_2S* effTrigger *L) +(ZZxsec* effZZMassMY700MQ800_2S * effTrigger *L);
  

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
      Ns=MY800xsec *effMY800MQ800_2S * effTrigger *L;
      Nb= (Higssxsec* effHigsMassMY800MQ800_2S* effTrigger *L) +(ZZxsec* effZZMassMY800MQ800_2S * effTrigger *L);
  

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
      Ns=MY900xsec *effMY900MQ800_2S * effTrigger *L;
      Nb= (Higssxsec* effHigsMassMY900MQ800_2S* effTrigger *L) +(ZZxsec* effZZMassMY900MQ800_2S * effTrigger *L);
  

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
    Ns=MY1000xsec *effMY1000MQ800_2S* effTrigger *L;
    Nb= (Higssxsec* effHigsMassMY1000MQ800_2S* effTrigger *L) +(ZZxsec* effZZMassMY1000MQ800_2S * effTrigger *L);


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
    //cout << (ZZxsec* effZZMassMY600MQ400_2S * effTrigger *L)<< endl;
    
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
    gr->SetMaximum(100000);
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

