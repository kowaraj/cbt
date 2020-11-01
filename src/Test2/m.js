
var init_sidenav = () => {
    console.log("------------init-sidenave-----------")
    let sidenav = document.querySelector('#slide-out');
    console.log(sidenav);
    console.log(M.Sidenav);
    M.Sidenav.init(sidenav, {});
};

exports.init_sidenav = init_sidenav;
