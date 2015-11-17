//
//  ZTMainInteractorIO.h
//  ZazoTest
//
//  Created by UAwan on 11/15/15.
//  Copyright © 2015 UAwan. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ZTMainInteractorInput <NSObject>

- (BOOL)saveVideoEntryWithName:(NSString *)name date:(NSDate *)date duration:(NSNumber *)duration serverPath:(NSString *)serverPath localPath:(NSString *)localPath;
- (void)fetchVideoEntries;
- (void)removeVideoEntries;

@end


@protocol ZTMainInteractorOutput <NSObject>

- (void)loadVideoItemsInPreviews:(NSArray *)videoItems;
- (void)removeVideoEntriesFromView;

@end

