/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2010 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#import "TiProxy.h"
#import "GDataXMLNode.h"

@interface TiDOMNamedNodeMapProxy : TiProxy {
@private
	GDataXMLElement *element;
}

@property(nonatomic,readonly) NSNumber* length;

-(void)setElement:(GDataXMLElement*)element;

@end
