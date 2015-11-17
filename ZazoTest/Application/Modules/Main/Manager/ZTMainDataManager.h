//
//  ZTMainDataManager.h
//  ZazoTest
//
//  Created by UAwan on 11/13/15.
//  Copyright © 2015 UAwan. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ZTCoreDataStore;
@class ZTVideoItem;

typedef void(^ZTMainDataManagerArrayCompletionBlock)(NSArray *results);
typedef void(^ZTMainDataManagerBoolCompletionBlock)(BOOL result);

@interface ZTMainDataManager : NSObject

- (void)addNewVideoItemEntry:(ZTVideoItem *)entry withCompletionBlock:(ZTMainDataManagerBoolCompletionBlock)result;
- (void)fetchVideoEntriesWithCompletionBlock:(ZTMainDataManagerArrayCompletionBlock)completionBlock;
- (void)removeAllVideoEntriesWithCompletionBlock:(ZTMainDataManagerBoolCompletionBlock)result;

@end
