{selector
  {type "helicopter"}

  {group
    {ignore {class airborne}}
	{select {class tank}}
	{select {class cannon}}
	{select {class armoredcar}}
	{select {class car}}
    {select {class human}}
	
	{sort {class airborne}}
	{sort {class tank_heavy}}
	{sort {class tank_medium}}
	{sort {class tank_light}}
	{sort {class tank_bullet}}
	{sort {class cannon}}
	{sort {class armoredcar}}
	{sort {class car_cannon}}
	{sort {class car_bullet}}
   	{sort {class human}}
    {sort {weapon "aa"}}
	{sort {weapon "fg"}}
    {sort {weapon "ap"}}
	{sort {weapon}}
    {sort distance}
  }
  {group
    {sort {attacking}}
    {sort distance}
  }
}
