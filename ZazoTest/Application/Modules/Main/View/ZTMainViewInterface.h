//
//  ZTMainViewInterface.h
//  ZazoTest
//
//  Created by UAwan on 11/13/15.
//  Copyright © 2015 UAwan. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ZTMainViewInterface <NSObject>

- (void)requestingCameraAndMicrophonePermission;
- (void)formattingPreviewCells;

- (void)loadVideoItemsInPreviews:(NSArray *)videoItemsArray;
- (void)removeVideoEntriesFromView;

@end
