function my_hamming_dna(dna1, dna2) {

  if (dna1.length == dna2.length) {
      var totalError = 0;
      for (var i=0; i<dna1.length; i++) {
      totalError += (dna1.charAt(i) != dna2.charAt(i));
  }
      return totalError;
  } else {
      return -1;
  }
};