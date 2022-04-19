function my_count_on_it(item) {

  for (i = 0; i < item.length; i++) {
      var array1 = item.map(item => item.length);
      return array1;
  }

};