void indexWsTeste()
{
Ws_teste="";
Ws_teste+=("<html>");
    Ws_teste+=("<meta charset ='utf-8'/>");
    Ws_teste+=("<style></style>");              
    Ws_teste+=("<head>");     
        Ws_teste+=("<script>");
        Ws_teste+=("var connection = new WebSocket('ws://'+location.hostname+':81/', ['arduino']);");
        Ws_teste+=("connection.onopen = function ()");
        Ws_teste+=("{");
            Ws_teste+=("connection.send('Message from Browser to ESP8266 Works' + new Date());");
            Ws_teste+=("connection.send('CLIENTE WebSocket' + new Date());");
            Ws_teste+=("connection.send('Time: ' + new Date());");
            Ws_teste+=("connection.send('!'+'#');");
            Ws_teste+=("};");
            Ws_teste+=("connection.onerror = function (error)");
        Ws_teste+=("{");
                Ws_teste+=("console.log('WebSocket Error ', error);");
        Ws_teste+=("};");
        Ws_teste+=("connection.onmessage = function (e) ");
        Ws_teste+=("{");
            Ws_teste+=("console.log('Server: ', e.data);");
            Ws_teste+=("var tempe=e.data;");
            Ws_teste+=("var primeiro='';");
            Ws_teste+=("var segundo='';");
            Ws_teste+=("if(tempe.search('#RPM')>-1)");
            Ws_teste+=("{");
                Ws_teste+=("primeiro=tempe.split('#RPM');");
                Ws_teste+=("segundo=primeiro[1].split(' ');");
                Ws_teste+=("rota=segundo[0];");
                Ws_teste+=("document.getElementById('rota').innerHTML = rota;");
            Ws_teste+=("}");
            Ws_teste+=("if(tempe.search('#COMB')>-1)");
            Ws_teste+=("{");
                    Ws_teste+=("primeiro=tempe.split('#COMB');");
                    Ws_teste+=("segundo=primeiro[1].split(' ');");
                    Ws_teste+=("comb=segundo[0];");
                    Ws_teste+=("document.getElementById('comb').innerHTML = comb;");
            Ws_teste+=("}");
            Ws_teste+=("if(tempe.search('#A_BMP')>-1)");
            Ws_teste+=("{");
                Ws_teste+=("var primeiro=tempe.split('#A_BMP');");
                Ws_teste+=("var segundo=primeiro[1].split(' ');");
                Ws_teste+=("alti=segundo[0];");
                Ws_teste+=("document.getElementById('alti').innerHTML = alti+' m';");
            Ws_teste+=("}");
            Ws_teste+=("if(tempe.search('#P_BMP')>-1)");
            Ws_teste+=("{");
                Ws_teste+=("var primeiro=tempe.split('#P_BMP');");
                Ws_teste+=("var segundo=primeiro[1].split(' ');");
                Ws_teste+=("pres=segundo[0];");
                Ws_teste+=("document.getElementById('pres').innerHTML = pres+' Pa';");
            Ws_teste+=("}");
            Ws_teste+=("if(tempe.search('#T_BMP')>-1)");
            Ws_teste+=("{");
                Ws_teste+=("var primeiro=tempe.split('#T_BMP');");
                Ws_teste+=("var segundo=primeiro[1].split(' ');");
                Ws_teste+=("tBMP=segundo[0];");
                Ws_teste+=("document.getElementById('tBMP').innerHTML = tBMP+' &#x2103';");
            Ws_teste+=("}");
            Ws_teste+=("if(tempe.search('#T_EXT')>-1)");
            Ws_teste+=("{");
                Ws_teste+=("var primeiro=tempe.split('#T_EXT');");
                Ws_teste+=("var segundo=primeiro[1].split(' ');");
                Ws_teste+=("texT=segundo[0];");
                Ws_teste+=("document.getElementById('tExt').innerHTML = texT;");
            Ws_teste+=("}");
            Ws_teste+=("if(tempe.search('#T_RAD')>-1)");
            Ws_teste+=("{");
                Ws_teste+=("var primeiro=tempe.split('#T_RAD');");
                Ws_teste+=("var segundo=primeiro[1].split(' ');");
                Ws_teste+=("traD=segundo[0];");
                Ws_teste+=("document.getElementById('tRad').innerHTML = traD;");
            Ws_teste+=("}");
            Ws_teste+=("if(tempe.search('#T_COF')>-1)");
            Ws_teste+=("{");
                Ws_teste+=("var primeiro=tempe.split('#T_COF');");
                Ws_teste+=("var segundo=primeiro[1].split(' ');");
                Ws_teste+=("tcoF=segundo[0];");
                Ws_teste+=("document.getElementById('tCoolF').innerHTML = tcoF;");
            Ws_teste+=("}");
            Ws_teste+=("if(tempe.search('#T_COQ')>-1)");
            Ws_teste+=("{");
                Ws_teste+=("var primeiro=tempe.split('#T_COQ');");
                Ws_teste+=("var segundo=primeiro[1].split(' ');");
                Ws_teste+=("tcoQ=segundo[0];");
                Ws_teste+=("document.getElementById('tCoolQ').innerHTML = tcoQ;");
            Ws_teste+=("}");
            Ws_teste+=("var rtcS='seg';");
            Ws_teste+=("var rtcD='11';");
            Ws_teste+=("var rtcM='12';");
            Ws_teste+=("var rtcA='13';");
            Ws_teste+=("var rtcH='14';");
            Ws_teste+=("var rtcm='15';");
            Ws_teste+=("if(tempe.search('#RTC_T')>-1)");
            Ws_teste+=("{");
                Ws_teste+=("var primeiro=tempe.split('#RTC_T');");
                Ws_teste+=("var segundo=primeiro[1].split(' ');");
                Ws_teste+=("rtcT=segundo[0];");
                Ws_teste+=("document.getElementById('tRTC').innerHTML = rtcT+' &#x2103';");
            Ws_teste+=("}");
            Ws_teste+=("if(tempe.search('#RTC_S')>-1)");
            Ws_teste+=("{");
                Ws_teste+=("var primeiro=tempe.split('#RTC_S');");
                Ws_teste+=("var segundo=primeiro[1].split(' ');");
                Ws_teste+=("rtcS=segundo[0];");
            Ws_teste+=("}");
            Ws_teste+=("if(tempe.search('#RTC_D')>-1)");
            Ws_teste+=("{");
                Ws_teste+=("var primeiro=tempe.split('#RTC_D');");
                Ws_teste+=("var segundo=primeiro[1].split(' ');");
                Ws_teste+=("rtcD=segundo[0];");
            Ws_teste+=("}");
            Ws_teste+=("if(tempe.search('#RTC_M')>-1)");
            Ws_teste+=("{");
                Ws_teste+=("var primeiro=tempe.split('#RTC_M');");
                Ws_teste+=("var segundo=primeiro[1].split(' ');");
                Ws_teste+=("rtcM=segundo[0];");
            Ws_teste+=("}");
            Ws_teste+=("if(tempe.search('#RTC_A')>-1)");
            Ws_teste+=("{");
                Ws_teste+=("var primeiro=tempe.split('#RTC_A');");
                Ws_teste+=("var segundo=primeiro[1].split(' ');");
                Ws_teste+=("rtcA=segundo[0];");
            Ws_teste+=("}");
            Ws_teste+=("if(tempe.search('#RTC_H')>-1)");
            Ws_teste+=("{");
                Ws_teste+=("var primeiro=tempe.split('#RTC_H');");
                Ws_teste+=("var segundo=primeiro[1].split(' ');");
                Ws_teste+=("rtcH=segundo[0];");
            Ws_teste+=("}");
            Ws_teste+=("if(tempe.search('#RTC_m')>-1)");
            Ws_teste+=("{");
                Ws_teste+=("var primeiro=tempe.split('#RTC_m');");
                Ws_teste+=("var segundo=primeiro[1].split(' ');");
                Ws_teste+=("rtcm=segundo[0];");
            Ws_teste+=("}");
            Ws_teste+=("var timeS = (rtcS+ ' '+rtcD+'-'+rtcM+'-'+rtcA+' '+rtcH+':'+rtcm);");
            Ws_teste+=("console.log('tempo RTC '+timeS);");
            Ws_teste+=("document.getElementById('time').innerHTML = timeS;");
        Ws_teste+=("};");
        Ws_teste+=("function sendAR() {");
            Ws_teste+=("var r = document.getElementById('r').value;");
            Ws_teste+=("var rEd = '#'+r;");
            Ws_teste+=("connection.send(rEd);");
        Ws_teste+=("};");
        Ws_teste+=("function sendGe() {");
            Ws_teste+=("var g = document.getElementById('g').value;");
            Ws_teste+=("var gEd = '$'+g;");
            Ws_teste+=("connection.send(gEd);");
        Ws_teste+=("};");
        Ws_teste+=("function acionaRele() {");
            Ws_teste+=("var R1 = (document.getElementById('R1').checked);");
            Ws_teste+=("R1 = R1*1;");
            Ws_teste+=("console.log('R1 = ' + R1);");
            Ws_teste+=("var R2 = (document.getElementById('R2').checked);");
            Ws_teste+=("R2 = R2*2;");
            Ws_teste+=("console.log('R2 = ' + R2);");
            Ws_teste+=("var R3 = (document.getElementById('R3').checked);");
            Ws_teste+=("R3 = R3*4;");
            Ws_teste+=("console.log('R3 = ' + R3);");
            Ws_teste+=("var R4 = (document.getElementById('R4').checked);");
            Ws_teste+=("R4 = R4*8;");
            Ws_teste+=("console.log('R4 = ' + R4);");
            Ws_teste+=("var R5 = (document.getElementById('R5').checked);");
            Ws_teste+=("R5 = R5*16;");
            Ws_teste+=("console.log('R5 = ' + R5);");
            Ws_teste+=("var R6 = (document.getElementById('R6').checked);");
            Ws_teste+=("R6 = R6*32;");
            Ws_teste+=("console.log('R6 = ' + R6);");
            Ws_teste+=("var R7 = (document.getElementById('R7').checked);");
            Ws_teste+=("R7 = R7*64;");
            Ws_teste+=("console.log('R7 = ' + R7);");
            Ws_teste+=("var R8 = (document.getElementById('R8').checked);");
            Ws_teste+=("R8 = R8*128;");
            Ws_teste+=("console.log('R8 = ' + R8);");
            Ws_teste+=("var estado = R1+R2+R3+R4+R5+R6+R7+R8;");
            Ws_teste+=("console.log('estado = ' + estado);");
            Ws_teste+=("connection.send('@'+estado);");
        Ws_teste+=("};");
    Ws_teste+=("</script>");
Ws_teste+=("</head>");
Ws_teste+=("<body>");
Ws_teste+=("<div align=center style='width:auto;heigh:auto;border:0px;margin:0px;'>");
        Ws_teste+=("<h2 style='color:blue'>RedLine </h2>");
        Ws_teste+=("<b>modo TESTE</b>");
        Ws_teste+=("<div id='time' style='font-size:clamp(0.3em, 0.5em + 0.7vw, 1em);'>time</div><br>");
        Ws_teste+=("<b>Controles</b><br/>");
        Ws_teste+=("Temp AC: <input id='r' type='range' min='0' max='100' step='1' value='0' onchange='sendAR();' /><br/>");
        Ws_teste+=("Temp Ge: <input id='g' type='range' min='0' max='100' step='1' value='0' onchange='sendGe();' /><br/>");
        Ws_teste+=("<br/><br/>");     
        Ws_teste+=("<b>Reles</b><br/>");
        Ws_teste+=("<table style='width:auto'>");
            Ws_teste+=("<tr align='center'>");
                Ws_teste+=("<td>1</td>");
                Ws_teste+=("<td>2</td>");
                Ws_teste+=("<td>3</td>");
                Ws_teste+=("<td>4</td>");
                Ws_teste+=("<td>5</td>");
                Ws_teste+=("<td>6</td>");
                Ws_teste+=("<td>7</td>");
                Ws_teste+=("<td>8</td>");
            Ws_teste+=("</tr>");
            Ws_teste+=("<tr align='center'>");
                Ws_teste+=("<td><input id='R1' type='checkbox' onclick=acionaRele();></td>");
                Ws_teste+=("<td><input id='R2' type='checkbox' onclick=acionaRele();></td>");
                Ws_teste+=("<td><input id='R3' type='checkbox' onclick=acionaRele();></td>");
                Ws_teste+=("<td><input id='R4' type='checkbox' onclick=acionaRele();></td>");
                Ws_teste+=("<td><input id='R5' type='checkbox' onclick=acionaRele();></td>");
                Ws_teste+=("<td><input id='R6' type='checkbox' onclick=acionaRele();></td>");
                Ws_teste+=("<td><input id='R7' type='checkbox' onclick=acionaRele();></td>");
                Ws_teste+=("<td><input id='R8' type='checkbox' onclick=acionaRele();></td>");
            Ws_teste+=("</tr>");
        Ws_teste+=("</table>");
        Ws_teste+=("<br/><br/>");
        Ws_teste+=("<b>Sensores</b><br/>");
        Ws_teste+=("<table style='width:auto;font-size:clamp(0.5em, 0.5em + 0.7vw, 2em);'>");
            Ws_teste+=("<tr align='center'>");
                Ws_teste+=("<td>T_RTC</td>");
                Ws_teste+=("<td>T_BMP</td>");
                Ws_teste+=("<td>P_BMP</td>");
                Ws_teste+=("<td>A_BMP</td>");
                Ws_teste+=("</tr>");
            Ws_teste+=("<tr align='center'>");
                Ws_teste+=("<th><div id='tRTC'></div></th>");
                Ws_teste+=("<th><div id='tBMP'></div></th>");
                Ws_teste+=("<th><div id='pres'></div></th>");
                Ws_teste+=("<th><div id='alti'></div></th>");
            Ws_teste+=("</tr>");
        Ws_teste+=("</table><br>");
        Ws_teste+=("<table style='width:auto;font-size:clamp(0.5em, 0.5em + 0.7vw, 2em);'>");
            Ws_teste+=("<tr align='center'>");
                Ws_teste+=("<td>T_EXT</td>");
                Ws_teste+=("<td>T_RAD</td>");
                Ws_teste+=("<td>T_Cool F</td>");
                Ws_teste+=("<td>T_Cool Q</td>");
            Ws_teste+=("</tr>");
            Ws_teste+=("<tr align='center'>");
                Ws_teste+=("<th><div id='tExt'></div></th>");
                Ws_teste+=("<th><div id='tRad'></div></th>");
                Ws_teste+=("<th><div id='tCoolF'></div></th>");
                Ws_teste+=("<th><div id='tCoolQ'></div></th>");               
            Ws_teste+=("</tr>");
        Ws_teste+=("</table><br><br>");
        Ws_teste+=("<table style='width:auto;text-align: center;'>");
            Ws_teste+=("<tr>");
                Ws_teste+=("<th>COMB</th>");
                Ws_teste+=("<th style='width:20%;'></th>");
                Ws_teste+=("<th>RPM</th>");
            Ws_teste+=("</tr>");
            Ws_teste+=("<tr>");
                Ws_teste+=("<td><div  style='text-align: center;width:100px;height:60px;border:1px solid #000000;background-color:#0000FF;color:#FFFFFF;margin:0 auto'><h2 id='comb'></h2></div></td>"); 
                Ws_teste+=("<td></td>");
                Ws_teste+=("<td><div  style='text-align: center;width:100px;height:60px;border:1px solid #000000;background-color:#0000FF;color:#FFFFFF;margin:0 auto'><h2 id='rota'></h2></div></td>");
            Ws_teste+=("</tr>");
        Ws_teste+=("</table>");
    Ws_teste+=("</div>");
Ws_teste+=("</body>");
Ws_teste+=("</html>");

}