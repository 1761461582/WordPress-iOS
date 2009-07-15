//
//  ImageCache.h
//  WordPress
//
//  Created by Josh Bassett on 15/07/09.
//  Copyright 2009 Clear Interactive. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface ImageCache : NSObject {
    NSMutableDictionary *_data;
}

+ (ImageCache *)sharedImageCache;

- (void)storeData:(NSData *)data forURL:(NSURL *)url;
- (NSData *)dataForURL:(NSURL *)url;

@end
