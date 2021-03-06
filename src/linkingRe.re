external openURL : string => Js.Promise.t unit =
  "openURL" [@@bs.scope "Linking"] [@@bs.module "react-native"];

external _canOpenURL : string => Js.Promise.t Js.boolean =
  "canOpenURL" [@@bs.scope "Linking"] [@@bs.module "react-native"];

let canOpenURL url =>
  _canOpenURL url |> Js.Promise.then_ (fun bool => Js.Promise.resolve (Js.to_bool bool));

external _getInitialURL : unit => Js.Promise.t (Js.Null.t string) =
  "getInitialURL" [@@bs.scope "Linking"] [@@bs.module "react-native"];
  
let getInitialURL () => 
  _getInitialURL () |> Js.Promise.then_ (fun stringOrNull => Js.Promise.resolve (Js.Null.to_opt stringOrNull));

external addEventListener : string => (Js.t {. url : string} => unit) => unit =
  "" [@@bs.scope "Linking"] [@@bs.module "react-native"];

external removeEventListener : string => (Js.t {. url : string} => unit) => unit =
  "" [@@bs.scope "Linking"] [@@bs.module "react-native"];