void lgraph() {

  
  TCanvas *c1 = new TCanvas("c1","Luminosidade para 2* sigma",700,500);
  

  // draw a frame to define the range
  TMultiGraph *mg = new TMultiGraph();

  Double_t x[6]={500,600,700,800,900,1000};
  Double_t ymq400[6]={2.489,21.873,89.357,274.583,736.005,1774.79};
  Double_t ymq600[6]={0.272,0.535,4.842,37.589,173.015,576.419};
  Double_t ymq800[6]={0.288,0.568,1.055,1.928,11.075,73.463};

  TGraph *gr1 = new TGraph( 6, x, ymq400 );
  gr1->SetName("gr1");
  gr1->SetTitle("MQ400");
  gr1->SetMarkerStyle(21);
  gr1->SetDrawOption("AP");
  gr1->SetLineColor(2);
  gr1->SetLineWidth(4);
  gr1->SetFillStyle(0);
  gr1->SetMaximum(10000);
  gr1->SetMinimum(0.001);
  //gr1->GetYaxis()->SetNdivisions(10);


  TGraph * gr2 = new TGraph( 6, x, ymq600 );
  gr2->SetName("gr2");
  gr2->SetTitle("MQ600");
  gr2->SetMarkerStyle(22);
  gr2->SetMarkerColor(2);
  gr2->SetDrawOption("P");
  gr2->SetLineColor(3);
  gr2->SetLineWidth(4);
  gr2->SetFillStyle(0);

  TGraph * gr3 = new TGraph( 6, x, ymq800 );
  gr3->SetName("gr3");
  gr3->SetTitle("MQ800");
  gr3->SetMarkerStyle(23);
  gr3->SetLineColor(4);
  gr3->SetLineWidth(4);
  gr3->SetFillStyle(0);

  mg->Add( gr1 );
  mg->Add( gr2 );
  mg->Add( gr3 );

  //gr1->Draw("ALP");


  mg->Draw("ALP");
  c1->BuildLegend();
  gPad->SetLogy();

  //xgPad->Modified();
  //  mg->GetXaxis()->SetRangeUser(300,12000);
  mg->GetYaxis()->SetRangeUser(0.001,10000);
  gPad->Modified();
  //c1->Draw();



}
