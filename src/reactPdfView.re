external view : ReasonReact.reactClass = "View" [@@bs.module "@react-pdf/core"];

let make style::(style: option (ReactPdfStyleSheet.t 'a))=? children =>
  ReasonReact.wrapJsForReason
    reactClass::view props::{"style": Js.Null_undefined.from_opt style} children;
