package hh_lol_prophet

import "github.com/real-web-world/hh-lol-prophet/global"

var (
	APPVersion = "0.2.1"
	Commit     = "dev"
	BuildTime  = ""
	BuildUser  = ""
)

func init() {
	global.SetAppInfo(global.AppInfo{
		Version:   APPVersion,
		Commit:    Commit,
		BuildUser: BuildTime,
		BuildTime: BuildUser,
	})
}
