//
//  IGListDiff.h
//  IGListDiff
//
//  Created by Guilherme Rambo on 10/12/16.
//  Copyright © 2016 Guilherme Rambo. All rights reserved.
//

#if TARGET_OS_OSX
#import <Cocoa/Cocoa.h>
#else
#import <UIKit/UIKit.h>
#endif

//! Project version number for IGListDiff.
FOUNDATION_EXPORT double IGListDiffVersionNumber;

//! Project version string for IGListDiff.
FOUNDATION_EXPORT const unsigned char IGListDiffVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <IGListDiff/PublicHeader.h>

#import <IGListDiff/IGListDiffCore.h>
#import <IGListDiff/IGListDiffable.h>
#import <IGListDiff/IGListExperiments.h>
#import <IGListDiff/IGListIndexPathResult.h>
#import <IGListDiff/IGListIndexSetResult.h>
#import <IGListDiff/IGListMacros.h>
#import <IGListDiff/IGListMoveIndex.h>
#import <IGListDiff/IGListMoveIndexPath.h>
#import <IGListDiff/NSObject+IGListDiffable.h>
