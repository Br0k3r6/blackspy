#!/usr/bin/env python3

import json

general = open("src/lib/config/general.json", "r")
general_json = json.loads(general.read())

author = general_json["author"]
version = general_json["version"]

banner = """  [i] Author  : {}
  [i] Version : {}""".format(author, version)

print(banner)