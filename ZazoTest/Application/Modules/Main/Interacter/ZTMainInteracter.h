//
//  ZTMainInteracter.h
//  ZazoTest
//
//  Created by UAwan on 11/13/15.
//  Copyright © 2015 UAwan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZTMainInteractorIO.h"

@interface ZTMainInteracter : NSObject <ZTMainInteractorInput>



@property (nonatomic, weak) id<ZTMainInteractorOutput> output;

@end
