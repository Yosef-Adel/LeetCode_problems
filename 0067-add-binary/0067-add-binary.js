/**
 * @param {string} a
 * @param {string} b
 * @return {string}
 */
var addBinary = function(a, b) {
  const aArr = a.split('')
  const bArr = b.split('')
  let carry = 0;
  let results = ""
  while (aArr.length || bArr.length) {
    const aValue = Number(aArr.pop()) | 0
    const bValue = Number(bArr.pop()) | 0
    const v = aValue + bValue + carry;
    switch (v) {
      case 0:
        carry = 0;
        results = '0' + results;
        break;
      case 1:
        carry = 0;
        results = '1' + results;
        break;
      case 2:
        carry = 1;
        results = '0' + results;
        break;
      default:
        carry = 1;
        results = '1' + results;
    }
  }
  if (carry) {
    return carry + results;
  }
  return results;
};
