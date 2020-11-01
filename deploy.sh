# put index.js into ./public
npm run prod

# copy images into ./public
cp ./img/* ./public/img

# copy index.hmtl by parts
n=`grep "<\!-- DEVELOPMENT PART, NO NOT DEPLOY -->" index.html -n | awk -F":" '{print $1}'`
echo $n
head -n $(( $n-1 )) ./index.html > ./public/index.html
tail -n 3 ./indexProduction.html >> ./public/index.html

# deploy
firebase deploy
