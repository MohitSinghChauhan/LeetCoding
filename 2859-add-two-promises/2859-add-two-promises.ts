async function addTwoPromises(promise1: Promise<number>, promise2: Promise<number>): Promise<number> {
return Promise.all([promise1,promise2])
 .then(value => value.reduce((acc,val) => acc+val,0))
};

/**
 * addTwoPromises(Promise.resolve(2), Promise.resolve(2))
 *   .then(console.log); // 4
 */