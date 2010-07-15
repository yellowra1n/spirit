/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UISelectionGrabber;

__attribute__((visibility("hidden")))
@interface UISelectionGrabberDot : UIView {
@private
	UISelectionGrabber* m_grabber;
}
@property(assign, nonatomic) UISelectionGrabber* grabber;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(int)textEffectsVisibilityLevel;
-(void)drawRect:(CGRect)rect;
@end
