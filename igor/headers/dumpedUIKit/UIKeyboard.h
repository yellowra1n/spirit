/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"
#import "UIKeyboard.h"

@class UIImage, UITextInputTraits;

@interface UIKeyboard : UIView {
	UIImage* m_snapshot;
	UITextInputTraits* m_defaultTraits;
	BOOL m_typingDisabled;
}
+(id)activeKeyboard;
+(void)initImplementationNow;
+(void)removeAllDynamicDictionaries;
+(CGSize)defaultSize;
+(CGSize)defaultSizeForInterfaceOrientation:(int)interfaceOrientation;
+(CGRect)defaultFrameForInterfaceOrientation:(int)interfaceOrientation;
+(CGSize)defaultSizeForOrientation:(int)orientation;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithDefaultSize;
-(void)dealloc;
-(void)setFrame:(CGRect)frame;
-(void)updateLayout;
-(int)orientation;
-(BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(void)prepareForGeometryChange;
-(void)geometryChangeDone:(BOOL)done;
-(void)removeAutocorrectPrompt;
-(void)acceptAutocorrection;
-(void)setCaretBlinks:(BOOL)blinks;
-(void)setCaretVisible:(BOOL)visible;
-(BOOL)returnKeyEnabled;
-(void)setReturnKeyEnabled:(BOOL)enabled;
-(id)defaultTextInputTraits;
-(void)setDefaultTextInputTraits:(id)traits;
-(id)delegate;
-(void)clearSnapshot;
-(void)takeSnapshot;
-(void)activate;
-(void)deactivate;
-(void)movedFromSuperview:(id)superview;
-(void)removeFromSuperview;
-(void)drawRect:(CGRect)rect;
-(void)mouseDown:(GSEventRef)down;
-(void)mouseUp:(GSEventRef)up;
-(void)mouseDragged:(GSEventRef)dragged;
-(int)textEffectsVisibilityLevel;
-(void)_setTypingEnabled:(BOOL)enabled;
-(BOOL)_typingEnabled;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
@end

@interface UIKeyboard (UIKeyboardAutomaticAppearance)
+(id)automaticKeyboard;
+(id)containerWindow;
+(UIKeyboardAnimationGeometry)calculateAnimationGeometryForOrientation:(int)orientation;
+(UIKeyboardAnimationGeometry)calculateAnimationGeometryForOrientation:(int)orientation outDirection:(int)direction;
-(void)orderInWithAnimation:(BOOL)animation;
-(void)orderInWithAnimation:(BOOL)animation fromDirection:(int)direction duration:(double)duration;
-(void)orderOutWithAnimation:(BOOL)animation;
-(void)orderOutWithAnimation:(BOOL)animation toDirection:(int)direction duration:(double)duration;
-(void)keyboardAutomaticWillOrderIn:(id)keyboardAutomatic context:(void*)context;
-(void)keyboardAutomaticOrderIn:(id)anIn finished:(id)finished;
-(void)keyboardAutomaticOrderOut:(id)anOut finished:(id)finished;
@end

