[@react.component]
let make = () => {

    <section className="container section">
        <div className="row">
            <div className="col s12 l4">
                <img src="./img/pic1.png" alt="pic1-pink" className="responsive-img materialboxed" /> 
            </div>
            <div className="col s12 l6 offset-l1">
                <h2 className="pink-text text-darken-5"> {R.str("PINK")} </h2>
                <p> {R.str("Lorem Ipsum - это текст-\"рыба\", часто используемый в печати и вэб-дизайне. Lorem Ipsum является стандартной \"рыбой\" для текстов на латинице с начала XVI века. ")}</p>
            </div>
        </div>
        <div className="row">
            <div className="col s12 l4 push-l7 offset-l1">
                <img src="./img/pic2.png" alt="pic2-blue" className="responsive-img materialboxed" /> 
            </div>
            <div className="col s12 l6 pull-l4 right-align">
                <h2 className="indigo-text text-darken-4"> {R.str("BLUE")} </h2>
                <p> {R.str("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco labori")}</p>
            </div>
        </div>

        <div className="row">
            <div className="col s12 l4">
                <img src="./img/pic3.png" alt="pic2-orange" className="responsive-img materialboxed" /> 
            </div>
            <div className="col s12 l6 offset-l1">
                <h2 className="orange-text text-darken-4"> {R.str("ORANGE")} </h2>
                <p> {R.str("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco labori")}</p>
            </div>
        </div>

    </section>

};
