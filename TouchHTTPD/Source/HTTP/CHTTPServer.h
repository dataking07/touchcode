//
//  CHTTPServer.h
//  TouchHTTPD
//
//  Created by Jonathan Wight on 04/06/08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CTCPSocketListener.h"

@interface CHTTPServer : NSObject <CTCPSocketListenerDelegate> {
	CTCPSocketListener *socketListener;
	NSMutableArray *defaultRequestHandlers;
	BOOL useHTTPS;
	NSArray *SSLCertificates;
}

@property (readwrite, retain) CTCPSocketListener *socketListener;
@property (readwrite, retain) NSMutableArray *defaultRequestHandlers;
@property (readwrite, assign) BOOL useHTTPS;
@property (readwrite, retain) NSArray *SSLCertificates;

- (void)createDefaultSocketListener;

@end