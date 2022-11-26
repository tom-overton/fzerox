#!/usr/bin/env python3

def apply(config, args):
    config['baseimg'] = 'baserom.z64'
    config['myimg'] = 'fzerox.z64'
    config['mapfile'] = 'build/fzerox.map'
    config['source_directories'] = ['.']
