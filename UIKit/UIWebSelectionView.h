/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIView.h>
#import <Availability2.h>

@class UIWebSelectionGraph, UIWebSelectionNode, UIWebTextRangeView, UIWebSelectionOutline, UIWebSelectionHandle, UIWebSelection, UIWebDocumentView;

__attribute__((visibility("hidden")))
@interface UIWebSelectionView : UIView {
	UIView* _center;
	CGRect _selectionFrame;
	UIWebSelectionHandle* _top;
	UIWebSelectionHandle* _right;
	UIWebSelectionHandle* _bottom;
	UIWebSelectionHandle* _left;
	UIWebSelectionOutline* _outline;
	UIWebTextRangeView* _textRangeView;
	UIWebDocumentView* _documentView;
	UIWebSelectionNode* _selectionNode;
	UIWebSelectionGraph* _selectionGraph;
	float _growThreshold;
	float _shrinkThreshold;
	struct {
		UIWebSelectionHandle* scrollingHandle;
		double startTime;
		int direction;
		NSTimer* timer;
	} _autoscrollData;
	struct {
		UIWebSelectionHandle* activeHandle;
		CGPoint handleCenterStart;
		float handleOffset;
	} _blockSelectionData;
	struct {
		UIWebSelectionHandle* start;
		UIWebSelectionHandle* end;
		CGSize startingOffset;
		BOOL anchorAtStart;
		struct {
			BOOL flipPossible;
			BOOL rectsChanged;
			CGRect originalSelectionRect;
		} flipData;
	} _rangedSelectionData;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_1
	BOOL _creatingSelection;
#endif
	int _nestedLayoutCalls;
}
@property(retain, nonatomic) UIWebSelectionNode* selectionNode;
@property(assign, nonatomic) CGRect selectionFrame;
@property(readonly, assign, nonatomic) UIWebSelection* selection;
-(id)tintView;
-(id)handleWithPosition:(int)position;
-(instancetype)initWithWebDocumentView:(id)webDocumentView;
-(void)dealloc;
-(void)hideCopyCallout;
-(void)showCopyCallout;
-(void)calloutBar:(id)bar selectedCommand:(id)command;
-(void)showControls;
-(void)hideControls;
-(void)setHandleCenters;
-(void)updateFrameAndHandles;
-(void)setSelectionFrame:(CGRect)frame animated:(BOOL)animated;
-(void)resetSelection;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(id)handles;
-(void)touchChanged:(id)changed forHandle:(id)handle;
-(void)touchChanged:(id)changed forHandleInText:(id)text;
-(BOOL)shouldSwitchToBlockModeForHandle:(id)handle;
-(void)switchToBlockModeForHandle:(id)handle;
-(void)switchToTextModeForHandle:(id)handle;
-(void)considerFlipping;
-(BOOL)canFlip;
-(void)computeExpandAndContractThresholdsForActiveHandle;
-(BOOL)shouldExpandForActiveHandle;
-(BOOL)shouldContractForActiveHandle;
-(void)expandForActiveHandle;
-(void)contractForActiveHandle;
-(int)autoscrollDirectionsForHandle:(id)handle;
-(void)updateAutoscrollForHandle:(id)handle;
-(void)_didScroll;
-(void)_subscribeToScrollNotificationsIfNecessary:(id)scrollNotificationsIfNecessary;
-(void)autoscrollTimerFired:(id)fired;
-(void)stopAnyAutoscrolling;
-(void)shiftWebRangeSelectionAnimationDidStop:(id)shiftWebRangeSelectionAnimation finished:(id)finished;
-(void)animateSloppyReleaseOfHandleInText:(id)text withMagnifier:(id)magnifier;
-(CGRect)desiredBox;
-(void)removeFromSuperview;
-(void)updateSelectionRects __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_2);
-(void)selectionChanged;
-(id)nodeInPristineGraphAtPoint:(CGPoint)point;
-(void)startSelectionCreationWithPoint:(CGPoint)point;
-(void)updateSelectionCreationWithPoint:(CGPoint)point;
-(void)endSelectionCreationWithPoint:(CGPoint)point;
-(void)clearSelection;
-(void)scaleChanged;
-(id)activeHandle;
-(BOOL)activelyManipulatingTextSelectionHandle;
-(BOOL)activelyManipulatingBlockSelectionHandle;
-(void)updateForChangedLayoutWhileManipulatingTextSelectionHandle;
-(void)updateForChangedLayoutWhileManipulatingBlockSelectionHandle;
-(void)layoutChanged;
@end

