void indexPage()
{     //**************BILHETE/APP********************
      // ("1 , qui 22-2-2222 8:30, 11 C    , 18         , 101010 Pa, 33 m    , 44       , 55       , 66         , 77      , 1  , Normal,");
      // (Ind, tempo sistema     , temp Sis, Temp Cabine, Pres Atm , Altitude, Temp Fora, Temp Agua, Temp CoolerF, Combusti, RPM, Nivel ,");
      //*********************************************         
    atualizaDados();
    modoTESTE=0;
    String bilSindice= bilhete;
    uint8_t corte[10];
    corte[0]=bilSindice.indexOf(',')+1;
    for(int i=1;i<12;i++)
    {
      corte[i]=bilSindice.indexOf(',',corte[i-1]+1);
    }
    String almNAgua=((bilSindice.substring(corte[10]+2,corte[11]))); 
    if(almNAgua=="Alerta!")
      almNAgua="Nível RAD!"; 
     else
      almNAgua="";
    
    String almTAgua=((bilSindice.substring(corte[6]+2,corte[7])));
    int temAgua= almTAgua.toInt();
    if(temAgua>=95)
      almTAgua="Temp RAD!"; 
     else
      almTAgua="";
      
    String almComb=((bilSindice.substring(corte[8]+1,corte[9])));
    int nivComb= almComb.toInt();
    if(nivComb<=8)
      almComb="COMB!";
    else
      almComb="";

http_Lj= "";
http_Lj+=("<!DOCTYPE HTML>");
http_Lj+=("<html>");
http_Lj+=("<meta charset ='utf-8'/>");
http_Lj+=("<meta http-equiv='refresh' content='1'>");
http_Lj+=("<meta name = 'viewport' content = 'width=device-width, initial-scale=1'>");
http_Lj+=("<style type='text/css'> a:link {text-decoration:none;}  body {color: blue; background-color: #DDC000 } </style>");
http_Lj+=("<div align=center style='margin:0;font-size:30px'>RedLine V1.0</div>");
http_Lj+=("<div align=center>");
    http_Lj+=("<table>");
        http_Lj+=("<tr align=center style='height:30px;font-size:15px;color:red;' >");
            http_Lj+=("<td id='alarmeNR'>");http_Lj+=almNAgua;http_Lj+=("</td>");
            http_Lj+=("<td id='alarmeTR'>");http_Lj+=almTAgua;http_Lj+=("</td>");
            http_Lj+=("<td id='alarmeComb'>");http_Lj+=almComb;http_Lj+=("</td>");
        http_Lj+=("</tr>");
    http_Lj+=("</table>");
http_Lj+=("</div>");
http_Lj+=("<div align=center style='width:80%;height:50px;border:1px solid #BAA100;background-color:#CBB000;color:#2600FF;margin:0 auto'> ");
    http_Lj+=("<table align=center>");
        http_Lj+=("<tr style='margin:0 auto;'>");
            http_Lj+=("<th style='font-size:15px;'>Time</th>");
            http_Lj+=("<th></th>");
            http_Lj+=("<th style='font-size:15px;'>Press&atildeo</th> ");
            http_Lj+=("<th></th>");
            http_Lj+=("<th style='font-size:15px;'>Altitude</th>");
            http_Lj+=("<th></th>");
        http_Lj+=("</tr>");
        http_Lj+=("<tr align=center style='color:#ffffff;font-weight: bold;'>");
            http_Lj+=("<td style='width:33%;'><div style='font-size:clamp(0.5em, 0.5em + 0.7vw, 1em);'>"); http_Lj+=(bilSindice.substring(corte[0],corte[1])); http_Lj+=("</div></td>");
            http_Lj+=("<td></td>");
            http_Lj+=("<td style='width:33%;'>"); http_Lj+=(bilSindice.substring(corte[3]+1,corte[4])); http_Lj+=("</td>");
            http_Lj+=("<td></td>");
            http_Lj+=("<td style='width:33%;'>"); http_Lj+=(bilSindice.substring(corte[4]+1,corte[5])); http_Lj+=("</td>");
            http_Lj+=("<td></td>");
        http_Lj+=("</tr>");    
    http_Lj+=("</table>");          
http_Lj+=("</div><br>");
http_Lj+=("<div align=center style='width:80%;height:70px;border:1px solid #BAA100;background-color:#CBB000;color:#2600FF;margin:0 auto'>");
    http_Lj+=("&nbspTemperaturas em &nbsp<code>&deg</code>C&nbsp &nbsp");
    http_Lj+=("<table align=center>");
        http_Lj+=("<tr>");
            http_Lj+=("<th style='font-size:clamp(0.2em, 0.5em + 0.5vw, 1em);'>Sistema</th>");
            http_Lj+=("<th style='font-size:clamp(0.2em, 0.5em + 0.5vw, 1em);'>Cabine</th>");
            http_Lj+=("<th style='font-size:clamp(0.2em, 0.5em + 0.5vw, 1em);'>Externa</th> ");
            http_Lj+=("<th style='font-size:clamp(0.2em, 0.5em + 0.5vw, 1em);'>Radiador</th>");
            http_Lj+=("<th style='font-size:clamp(0.2em, 0.5em + 0.5vw, 1em);'>Cooler F</th>");
            http_Lj+=("<th style='font-size:clamp(0.2em, 0.5em + 0.5vw, 1em);'>Cooler Q</th>");
        http_Lj+=("</tr>");
        http_Lj+=("<tr align=center style='color:#ffffff;font-size:20px;font-weight: bold;'>");
            http_Lj+=("<td>"); http_Lj+=(bilSindice.substring(corte[1]+1,corte[2]-2)); http_Lj+=("</td>");
            http_Lj+=("<td>"); http_Lj+=(bilSindice.substring(corte[2]+1,corte[3])); http_Lj+=("</td>");
            http_Lj+=("<td>"); http_Lj+=(bilSindice.substring(corte[5]+1,corte[6])); http_Lj+=("</td>");
            http_Lj+=("<td>"); http_Lj+=(bilSindice.substring(corte[6]+1,corte[7])); http_Lj+=("</td>");
            http_Lj+=("<td>"); http_Lj+=(bilSindice.substring(corte[7]+1,corte[8])); http_Lj+=("</td>");
            http_Lj+=("<td>-</td>");
        http_Lj+=("</tr>"); 
    http_Lj+=("</table> ");          
http_Lj+=("</div><br>");
http_Lj+=("<div align=center style='width:60%;height:50px;border:1px solid #BAA100;background-color:#CBB000;color:#2600FF;margin:0 auto'>");
    http_Lj+=("&nbspAjuste Temperatura AC&nbsp<br>&nbsp<b>");
        http_Lj+=("<a href=\/Tdec=dec\><code>&darr;</code>- &nbsp</a>");
        http_Lj+=("(tempRef)");
        http_Lj+=("</b><code>&deg;</code>C&nbsp<b>");
            http_Lj+=("<a href=\/Tinc=inc\><code>&uarr;</code>+ &nbsp</a></b>");
http_Lj+=("</div><br>"); 
http_Lj+=("<div>");
http_Lj+=("<div align=center style='width:60%;height:20px;border:1px solid #BAA100;background-color:#CBB000;color:#2600FF;margin:0 auto'>");
    http_Lj+=("AR Auto &nbsp &nbsp ");
    http_Lj+=("<a href=\/arAuto\> Off &nbsp</a>");
    http_Lj+=("&nbsp <a href=\/arAuto\> On </a>");
http_Lj+=("</div><br> ");
http_Lj+=("<div align=center style='width:60%;height:20px;border:1px solid #BAA100;background-color:#CBB000;color:#2600FF;margin:0 auto'>");
    http_Lj+=("VENT 1 &nbsp &nbsp  ");
    http_Lj+=("<a href=\/vent0\> Off &nbsp</a>");
    http_Lj+=("&nbsp <a href=\/vent1\> On </a>");
http_Lj+=("</div><br>");
http_Lj+=("<div align=center style='width:60%;height:20px;border:1px solid #BAA100;background-color:#CBB000;color:#2600FF;margin:0 auto'>");
    http_Lj+=("VENT 2 &nbsp &nbsp");
    http_Lj+=("<a href=\/vent0\> Off &nbsp</a>");
    http_Lj+=("&nbsp <a href=\/vent2\> On </a>");
http_Lj+=("</div><br>");  
http_Lj+=("<div align=center style='width:60%;height:20px;border:1px solid #BAA100;background-color:#CBB000;color:#2600FF;margin:0 auto'>");
    http_Lj+=("VENT 3 &nbsp &nbsp ");
    http_Lj+=("<a href=\/vent0\> Off &nbsp</a>");
    http_Lj+=("&nbsp <a href=\/vent3\> On </a>");
http_Lj+=("</div><br>");       
http_Lj+=("<div align=center style='width:80%;height:70px;border:1px solid #BAA100;background-color:#CBB000;color:#2600FF;margin:0 auto'>");
    http_Lj+=("<table align=center style='font-size:15px;font-weight: bold;'>");
        http_Lj+=("<tr>");
            http_Lj+=("<th style='font-size:15px;'>COMB (l)</th>");
            http_Lj+=("<th></th>");
            http_Lj+=("<th style='font-size:15px;'>RMP</th>");     
        http_Lj+=("</tr>");
        http_Lj+=("<tr style='color:#ffffff;font-size:30px;text-align:center;font-weight:bold'>");
            http_Lj+=("<td>"); http_Lj+=(bilSindice.substring(corte[8]+1,corte[9])); http_Lj+=("</td>");
            http_Lj+=("<td style='width:90px;'></td>");  
            http_Lj+=("<td>");  http_Lj+=(bilSindice.substring(corte[9]+1,corte[10])); http_Lj+=("</td>");
        http_Lj+=("</tr>");    
    http_Lj+=("</table>");           
http_Lj+=("</div>");
http_Lj+=("</html>");

} 
