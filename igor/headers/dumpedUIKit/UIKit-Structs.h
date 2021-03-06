/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */
#import <CoreFoundation/CoreFoundation.h>
#import <QuartzCore/QuartzCore.h>

typedef struct __GSEvent* GSEventRef;

typedef struct {
	unsigned char pathIndex;
	unsigned char pathIdentity;
	unsigned char pathProximity;
	float pathPressure;
	float pathMajorRadius;
	CGPoint pathLocation;
	void* pathWindow;
} XXStruct__FxRIA;

typedef struct {
	int _field1;
	unsigned short _field2;
	unsigned short _field3;
	float _field4;
	float _field5;
	float _field6;
	float _field7;
	float _field8;
	float _field9;
	unsigned char _field10;
	unsigned char _field11;
	XXStruct__FxRIA _field12[0];
} XXStruct_$jUSvD;

typedef struct CGColor* CGColorRef;

typedef struct __GSHeartbeat* GSHeartbeatRef;

typedef struct UIEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} UIEdgeInsets;

typedef struct {
	float _field1;
	float _field2;
	float _field3;
	float _field4;
	float _field5;
} XXStruct_iyXfGC;

typedef struct CGShading* CGShadingRef;

typedef struct CGContext* CGContextRef;

typedef struct {
	CGRect left;
	CGRect middle;
	CGRect right;
} XXStruct_UUz0SD;

typedef struct {
	int _field1;
	int _field2;
	int _field3;
	int _field4;
	BOOL _field5;
	BOOL _field6;
} XXStruct_7U_TLD;

typedef struct {
	BOOL _field1;
	BOOL _field2;
	BOOL _field3;
	float _field4;
	float _field5;
	int _field6;
	CGRect _field7;
	CGRect _field8;
} XXStruct_TF$i3B;

typedef struct {
	XXStruct_UUz0SD top;
	XXStruct_UUz0SD middle;
	XXStruct_UUz0SD bottom;
} XXStruct_4cr1oD;

typedef struct {
	BOOL _field1;
	union {
		struct {
			id _field1;
			id _field2;
		} _field1;
		GSEventRef _field2;
	} _field2;
} XXStruct_CKAdxD;

@class UIView, UIImage;
typedef union {
	UIImage* image;
	UIView* view;
} XXUnion_a01swB;

typedef struct {
	float _field1;
	float _field2;
	float _field3;
} XXStruct_NwkmQC;


typedef struct USet USet;

typedef struct {
	CGRect _field1;
	CGRect _field2;
	CGRect _field3;
	CGRect _field4;
	CGRect _field5;
	id _field6;
	id _field7;
	unsigned _field8;
	unsigned _field9;
	unsigned _field10;
	id _field11;
} XXStruct_K4qLnD;

@class NSString;
typedef struct {
	CGRect _field1;
	CGRect _field2;
	CGRect _field3;
	CGRect _field4;
	CGRect _field5;
	NSString* _field6;
	NSString* _field7;
	unsigned _field8;
	unsigned _field9;
	unsigned _field10;
	id _field11;
} XXStruct_MMLx8B;

typedef struct _WKClassInfo* WKClassInfoRef;

typedef struct _WKObject {
	unsigned referenceCount;
	WKClassInfoRef classInfo;
} WKObject;

typedef struct WKView* WKViewRef;

typedef struct TiledSurface TiledSurface;

@class WAKWindow;
typedef struct WKWindow {
	WKObject _field1;
	WAKWindow* _field2;
	CGRect _field3;
	WKViewRef _field4;
	WKViewRef _field5;
	TiledSurface* _field6;
	unsigned _field7 : 1;
	unsigned _field8 : 1;
} WKWindow;

typedef struct {
	double width;
	double height;
} XXStruct_meWoWB;


typedef struct CGGradient* CGGradientRef;

typedef struct {
	float amount;
	int unit;
} XXStruct_tp$7nC;

typedef struct {
	id _field1;
	unsigned _field2;
} XXStruct_HeigOC;

typedef struct UINibDecoderObjectEntry {
	unsigned _field1;
	unsigned _field2;
} UINibDecoderObjectEntry;

typedef struct UINibDecoderValue {
	unsigned _field1;
	unsigned _field2;
} UINibDecoderValue;

typedef struct UINibArchiveTableInfo {
	unsigned count;
	unsigned offset;
} UINibArchiveTableInfo;

typedef struct UINibDecoderHeader {
	unsigned char type[10];
	unsigned formatVersion;
	unsigned coderVersion;
	UINibArchiveTableInfo objects;
	UINibArchiveTableInfo keys;
	UINibArchiveTableInfo values;
	UINibArchiveTableInfo classes;
} UINibDecoderHeader;

typedef struct UINibDecoderRecursiveState {
	int objectID;
	int nextGenericKey;
	unsigned nextValueSearchIndex;
	BOOL replaced;
} UINibDecoderRecursiveState;

typedef struct UIKeyToKeyIDCache {
	NSString* previousKey[64];
	void* previousKeyID[64];
	BOOL previousKeyExists[64];
	int hashHits;
	int hashHotMisses;
	int hashColdMisses;
} UIKeyToKeyIDCache;

typedef struct UIKeyAndScopeToValueCache {
	unsigned previousScope;
	unsigned previousKey;
	UINibDecoderValue* previousValue;
} UIKeyAndScopeToValueCache;

typedef struct UIStringIDTableBucket {
	NSString* _field1;
	unsigned _field2;
	void* _field3;
} UIStringIDTableBucket;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct {
	id _field1;
	id _field2;
	id _field3;
	id _field4;
} XXStruct_Xx1ZfA;


typedef struct {
	int _field1;
	int _field2;
	id _field3;
	id _field4;
	float _field5;
	int _field6;
	SEL _field7;
	id _field8;
} XXStruct_b4LybD;

typedef struct UIKeyboardAnimationGeometry {
	CGPoint _field1;
	CGPoint _field2;
	CGRect _field3;
	CGAffineTransform _field4;
} UIKeyboardAnimationGeometry;


