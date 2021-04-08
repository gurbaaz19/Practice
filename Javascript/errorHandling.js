function getDatafromSomewhere() {
  return undefined;
}
try {
  let data = getDatafromSomewhere();
  console.log(data.tempPune);
} catch (e) {
  console.log(e.message);
}
finally{
    console.log("Finally");
}