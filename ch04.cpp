#include "std_lib_facilities.h"

int main()
{
	vector<double> num;
	double id;
	int i = 0;
	char ki;
	double min = numeric_limits<double>::max();
	double max = numeric_limits<double>::lowest();
	constexpr double inch_to_cm = 2.54;
	constexpr double m_to_cm = 100;
	constexpr double ft_to_in = 12;
	double sum = 0;
	string value;

do 	
	{
		cout << "Give me a number: \n";
		
			cin >> id >> value;
			if(value == "m"){
				cout << id << "m \n";
			}

			else if(value == "inch"){
				id *= inch_to_cm;
				id /= m_to_cm;
				cout << id << "m \n";
			}
			else if (value == "ft")
			{
				id *= ft_to_in;
				id *= inch_to_cm;
				id /= m_to_cm;
				cout << id << "m \n";
			}
			else if (value =="cm")
			{
				id /= m_to_cm;
				cout << id << "m \n";
			}
			else error("Wrong unit representation!");
			if (id < 0) error("0 is not a length!");
			num.push_back(id);
			sum += id;
			if(id > max)
				{
					max = id;

				}
			if(id < min)
				{
					min = id;
				}

					cout << "The smallest so far: " << min << '\n';
					cout << "The largest so far: " << max << '\n';
		
		cout << "Do you want to continue? Type any character if yes and type | if notd \n";
		cin >> ki;
		
	} while(ki != '|');
			if((max - min) < 0.01)
				cout << "The numbers are almost equals!\n";

		if (min == max)
			cout << "The numbers are equals\n";
		cout << "The sum of all the numbers value: " << sum << endl;
		i = 0;
		sort(num);
		while(i < num.size()){
			cout << i+1 << ". item: " << num[i] << '\n';
			i++;
		}

	return 0;	
}