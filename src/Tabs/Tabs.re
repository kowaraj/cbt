[@react.component]
let make = () => {

    <section className="container section" id="services">
        <div className="row">
            <div className="col s12">
                <ul className="tabs">
                    <li className="tab">
                        <a href="#tab-a"> {R.str("TAB-a")} </a>
                    </li>
                    <li className="tab">
                        <a href="#tab-b"> {R.str("TAB-b")} </a>
                    </li>
                </ul>
                <div className="col s12" id="tab-a">
                    <p> {R.str("a-Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco labori")}</p>
                </div>
                <div className="col s12" id="tab-b">
                    <p> {R.str("b-Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco labori")}</p>
                </div>
            </div>
        </div>
    </section>

};