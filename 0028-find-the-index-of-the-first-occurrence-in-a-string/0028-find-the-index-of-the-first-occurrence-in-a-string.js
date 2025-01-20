var strStr = function(haystack, needle) {
  if (needle.length > haystack.length)
    return -1;

  let needleArr = needle.split('')
  let haystackArr = haystack.split('')
  let indexesArr = []

  haystackArr.forEach((v, i) => {
    if (v === needleArr[0]) {
      indexesArr.push(i)
    }
  })

  indexesArr = indexesArr.filter(v => (v + needle.length) <= haystack.length)
  for (i = 0; i < indexesArr.length; i++) {
    const idx = indexesArr[i]
    if (needle === haystack.slice(idx, idx + needle.length)) {
      return idx
    }

  }
  return -1;
};
