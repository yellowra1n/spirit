/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <Foundation/NSObject.h>


__attribute__((visibility("hidden")))
@interface _UIAlertManager : NSObject {
}
+(void)hideTopmostMiniAlert:(int)alert;
+(void)hideAlertsForTermination;
+(void)showTopmostMiniAlert;
+(BOOL)hideTopMostAlertAnimated:(BOOL)animated;
+(id)topMostAlert;
+(id)visibleAlert;
+(void)noteOrientationChangingTo:(int)to;
+(void)reorientAlertWindowTo:(int)to animated:(BOOL)animated;
+(void)addToStack:(id)stack dontDimBackground:(BOOL)background;
+(void)removeFromStack:(id)stack;
+(BOOL)stackContainsAlert:(id)alert;
+(void)tellSpringboardShowingAlert:(id)alert animated:(BOOL)animated;
+(void)tellSpringboardHidingAlert:(id)alert animated:(BOOL)animated;
+(void)createAlertWindowIfNeeded:(BOOL)needed;
+(void)sizeAlertWindowForCurrentOrientation;
@end

