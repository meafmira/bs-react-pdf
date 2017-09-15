external text : ReasonReact.reactClass = "Text" [@@bs.module "@react-pdf/core"];

let make ::style=? => ReactPdfCommon.make text (Js.Obj.empty ()) ::?style;
