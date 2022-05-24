import socket

cliente = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
cliente.connect(('bancocn.com', 80))
cliente.send('GET / HTTP/1.0\nHost: www.bancocn.com\nUser-Agent: Mozilla/5.0 (X11; Linux x86_64; rv:68.0) Gecko/20100101 Firefox/68.0\nAccept: text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8\nAccept-Language: en-US,en;q=0.5\nDNT: 1\nCookie: __cfduid=dfaa496164a1cd739ee8ceb7d4e88a51c1596668959; cf_clearance=2b8266ef08a198c84bbc3fbdc17dcd197d3071da-1596669042-0-1z10270d66z93705d82zb8ecb364-150; PHPSESSID=vuk0qcbdi0seuvjcbv3lio7l57\nUpgrade-Insecure-Requests: 1\n\n')
resposta = cliente.recv(1024)

print (resposta)
