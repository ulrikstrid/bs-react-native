let canOpenURL: string => Js.Promise.t bool;

external openURL : string => Js.Promise.t unit =
  "openURL" [@@bs.scope "Linking"] [@@bs.module "react-native"];

let getInitialURL : unit => Js.Promise.t (option string);

external addEventListener : string => (Js.t {. url : string} => unit) => unit =
  "" [@@bs.scope "Linking"] [@@bs.module "react-native"];

external removeEventListener : string => (Js.t {. url : string} => unit) => unit =
  "" [@@bs.scope "Linking"] [@@bs.module "react-native"];