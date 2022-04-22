function my_robot_simulator(param_1)
{
	var index = 0;
	var x = 0;
	var y = 0;
	var compass = 'n';
	while (param_1[index])
	{
		if (param_1[index] == 'R')
		{
			if (compass == 'n')
				compass = 'e';
			else if (compass == 'e')
                                compass = 's';
			else if (compass == 's')
                                compass = 'w';
			else if (compass == 'w')
                                compass = 'n';
		}
		else if (param_1[index] == 'L')
		{
			if (compass == 'n')
                                compass = 'w';
                        else if (compass == 'w')
                                compass = 's';
                        else if (compass == 's')
                                compass = 'e';
                        else if(compass == 'e')
                                compass = 'n';
		}
		else if(param_1[index] == 'A')
		{
			if (compass == 'n')
                                y--;
                        else if(compass == 'w')
                                x--;
                        else if(compass == 's')
                                y++;
                        else if(compass == 'e')
                                x++;
		}
		index++;
	}
	var str = "";
	str += "{x: ";
	if (x < 0)
	{
		str += "-";
		x = x * -1;
	}
	str += x; // + '0';
	str += ", y: ";
	if (y < 0)
        {
                str += "-";
                y = y * -1;
        }
    str += y; // + '0';
	str += ", bearing: '";
	//str += 39;
	if (compass == 'n')
	{
		str += "north";
	}
	else if (compass == 's')
    {
		str += "south";
    }
	if (compass == 'e')
    {
		str += "east";
    }
	if (compass == 'w')
    {
		str += "west";
    }
	//str += 39;
	str += "'}";
	// str += "\0";
	return (str);
}

//console.log(my_robot_simulator("RAALALL"));
//console.log(my_robot_simulator("AAAA"));
//console.log(my_robot_simulator("RAARA"));
//console.log(my_robot_simulator(""));