import 'bootstrap/dist/css/bootstrap.css';
import Sun from "../Images/cat.png";
export const ImageComponent = () => {
    return (
        <div className='container'>
            <img src={Sun} alt="cat" />
        </div>
    );
}