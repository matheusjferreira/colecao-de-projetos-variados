import matplotlib.pyplot as plt

def main():

	months = ['January', 'February', 'March', 'April', 'May', 'June', 'July', 'August', 'September', 'October', 'November', 'December']

	print('######################################################################################################')
	print('#                                       COVID-19 SIMULATOR                                           #')
	print('#.:..............................................    ................. . . . . . . .   . . .     .   #')
	print('#.:.....................:................    ....ri:r.............. . . . . .   . . . . . .   .     .#')
	print('#.:..................:...................iiQK .. BBBB ....     ..... . . . .   . .   . .   .   .     #')
	print('#.:.............:.:...........:........ .BBQM .. iBQ.     :Pr   . ... . . . . .   . . .         .   .#')
	print('#.:..........:...:...:..............  .   vgX  .  Bv      BBBB.      . . .     . . . . .         .   #')
	print('#.:.............:...:...............1PBi   rQ     P. 7ggi Bu2i        . .   .   . .   .             .#')
	print('#.:..........:...:.:...:............uRBQ    J255BBPBuPES 7P.    1Bu  .   .   . .   .                 #')
	print('#.:.....:.:.:.:...............   ..   :gYvBQBbBBQgBvBBQBQs7  : YBDDi  .   . . .                     .#')
	print('#.:..........:............... .Qu  rKKLXQBBBBBuDQE:gBBQdERPBBBBX:.     .   .       . .               #')
	print('#.:.......:.:...:............KBQB5  ZQQbQP:jBBQPBq.rRQ2dBBM21QB         . . .                       .#')
	print('#.:......:.:.:...:.......... ibqXBE:PQB5ddirBBBBBRKPgBMQBB1:LPM1   qQd   . .                         #')
	print('#.:...........:.......:....       rBPXgBBQP:UBMuBBBRBBBQZi:2U7vPIiqgEQ:   . . . .   .               .#')
	print('#.:..:...:.:.:.....:.:.... 1Ei   :BBQR5BQM1vBBBBBM2L1KBBQqgE:ivrvv. .s.                              #')
	print('#.:.........:...:........ :BBBBPi7BPdBjBBBBBBQQBBBXRqQBBBQBBqMZPRi .v.                               #')
	print('#.:............:..........rdJ7vjLZ2gKuUurjPBBR7MBBXi:IRQQMrKuK12j7r7L:  ..                           #')
	print('#.:...:.:.:.:.......:.....      rKqQBqRs7.7QBBBBBMZI7uDEMM1:i:vg17i.rsJEBL                          .#')
	print('#.:....:.......:..........  :.  .BBBBBbXISgQQBQKQMEDIXdEEsLPi.viii:::r7vJi                           #')
	print('#.:.......:.:.:.:..........dBggD2ZbsKvqUqKKPQPvrvLMDLvqSEK1K277iiu.     ..                           #')
	print('#.:....:.:.:.:.:.:.........PQBPY:rQbK1jiPPrLMgKgvvPZdDvDBsZPj:77:r.                                  #')
	print('#.:.........:.............. Li    BQgbXXbMJLMP57vJSXPqSvvrvY7iv.:. :7v:                              #')
	print('#.:....:.:.......:..........      LPsgg2BB::qKUs:ru577uv:vL7.:YKg5Sr.i:                              #')
	print('#.:...........:.:............   :r5rIbU7Li:LSuUv..j1si7r..:ii. rEvv.                                 #')
	print('#.:......:.:.................DRgQZ: :vvqr:iuJ:rES:YUur:r:i::::   i                                   #')
	print('#.:...:...:.:................5gbv   .:v:vi:JrUBjBZ:i:irrruBsEv ....                                  #')
	print('#.:..........:............... i7   iKs:.i7rIrrj:r:.7r:7jvrv::. ..:r.                                 #')
	print('#.:.:...:.....................  ....v:.  .:.:.rY7.iLv::.. .:.   .                                    #')
	print('#.::.:.......:...................... .  ru.  :. ::          :i:.                                     #')
	print('#.:.:.....:............................PE:.    .X.. ....    .vvi.                                    #')
	print('#.::.:................................ 7i:. .. .r:.. ... .   ..                                      #')
	print('#.:...:................................    ....  .  .     .                                          #')
	print('######################################################################################################\n')

	right = 0
	while not right:
		year = int (input('\nEnter the current year: '))
		year_compare = int(input('Which year do you want to compare?: '))
		verification = 'maybe'
		while verification != 'no' and verification != 'yes':
		    verification = str (input('\nWant to change the years? [yes or no]: '))
		    if verification == 'no':
			    right = 1
		    elif verification == 'yes':
			    right = 0
	print('')

	month = 0
	while month < 1 or month > 13:
		month = int (input('Enter the number of months you want to run the simulation: '))
		if month < 1 or month > 13:
			print('\nInvalid value!\n')
	print('')

	start = int (input('Enter the month of the start of the pandemic: '))
	reset = start
	print('')

	matrix1 = []
	size = []
	counter = reset
	for i in range(month):
		matrix1.append([])
		size.append([])
		for j in range(1):
	   		matrix1[i].append(float (input(f'Enter the number of deaths in {months[start - 1]} {year_compare}: ')))
	   		size[i].append(counter)
	   		counter = counter + 1
	   		start = start + 1
	   		if i == month - 1:
	   			end = counter

	size_two = []
	counter_two = end
	for i in range(month):
		size_two.append([])
		for j in range(1):
			size_two[i].append(counter_two)
			counter_two = counter_two + 1

	start = reset
	for i in range(month):
		for j in range(1):
			print(f'{months[start - 1]} = {matrix1[i]}')
			start = start + 1

	start = reset
	print('')
	matrix2 = []
	for i in range(month):
		matrix2.append([])
		for j in range (1):
	   		matrix2[i].append(float (input(f'Enter the number of deaths in {months[start - 1]} {year}: ')))
	   		start = start + 1

	start = reset
	for i in range(month):
		for j in range(1):
			print(f'{months[start - 1]} = {matrix2[i]}')
			start = start + 1

	start = reset	
	print('')
	print(f'The difference in deaths from COVID-19 in {year_compare} between {year} is: ')
	matrix_dif = []
	penultimate = 0
	last = 0
	for i in range(month):
		matrix_dif.append([])
		for j in range(1):
			matrix_dif[i].append(matrix2[i][j] - matrix1[i][j])
			print(f'{months[start - 1]} = {matrix_dif[i]}')
			start = start + 1
			if i == month - 2:
				penultimate = matrix_dif[i][j]
			if i == month - 1:
				last = matrix_dif[i][j]

	print(f'\nDeath Difference Graph: \n')
	x = [size]
	y = [matrix_dif]

	plt.rcParams['figure.figsize'] = (8,5)
	plt.scatter(x,y)
	plt.title('Death Difference Graph')
	plt.xlabel('Months')
	plt.ylabel('Deaths numbers')
	plt.xticks(range(reset, counter))
	plt.show()


	print('')
	mortality_rate = float(input('Enter the overall mortality rate: '))

	start = reset
	print('\nNumber of COVID-19 Infected: ')
	num_infecteds = []
	for i in range(month):
		num_infecteds.append([])
		for j in range(1):
			num_infecteds[i].append(matrix_dif[i][j] * 100 / mortality_rate)
			print(f'{months[start - 1]} = {num_infecteds[i]}')
			start = start + 1

	start = reset
	print('\nRounded numbers: ')
	for i in range(month):
		for j in range(1):
			print(f'{months[start - 1]} = {round(num_infecteds[i][j])}')
			start = start + 1

	print('\nChart infected: ')

	x = [size]
	y = [num_infecteds]

	plt.scatter(x, y)
	plt.title('COVID-19 Infected Chart')
	plt.xlabel('Months')
	plt.ylabel('Infecteds numbers')
	plt.xticks(range(reset, counter))
	plt.show()

	start = reset
	percentage = int (input('\nWhat percentage of infected people need to be hospitalized?: '))
	interned = []
	for i in range(month):
		interned.append([])
		for j in range(1):
			interned[i].append(round(num_infecteds[i][j] * percentage / 100))
			print(f'{months[start - 1]} = {interned[i]}')
			start = start + 1

	print('\nHospitalization chart: \n')
	x = [size]
	y = [interned]

	plt.scatter(x,y)
	plt.title('Hospitalized Chart')
	plt.xlabel('Months')
	plt.ylabel('Hospitalizations numbers')
	plt.xticks(range(reset, counter))
	plt.show()

	increase = 100 * last / penultimate
	print(f'\nPercentage of death estimates = {increase}.')
	coupled = []
	total = last
	reset_two = counter_two
	counter_two = end
	for i in range(month):
		coupled.append([])
		for j in range(1):
			total = increase * total / 100
			coupled[i].append(total)
			print(f'{months[counter_two - 1]} = {total}')
			counter_two = counter_two + 1

	counter_two = reset_two
	print('\nDeath chart: \n')
	x = size_two
	y = coupled

	plt.scatter(x,y)
	plt.title('Death Estimation Graph')
	plt.xlabel('Months')
	plt.ylabel('Deaths numbers')
	plt.xticks(range(end, counter_two))
	plt.show()

main()