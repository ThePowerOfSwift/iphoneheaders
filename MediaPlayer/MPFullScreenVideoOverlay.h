/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPSwipableView.h"

@class MPVideoViewController, UILabel, UINavigationButton, MPItem, MPDetailSlider, MPFullScreenTransportControls, UIView, UIImageView, UINavigationBar, UINavigationItem;

@interface MPFullScreenVideoOverlay : MPSwipableView {
	MPVideoViewController* _videoController;
	id _target;
	MPItem* _item;
	int _interfaceOrientation;
	UIView* _loadingMovieIndicatorView;
	MPDetailSlider* _scrubControl;
	UILabel* _scrubSpeedLabel;
	UILabel* _scrubInstructionsLabel;
	MPFullScreenTransportControls* _transportControls;
	UINavigationButton* _backButton;
	UINavigationBar* _navigationBar;
	UIImageView* _navigationBarBackground;
	UIImageView* _navigationBarShadow;
	UINavigationItem* _navigationItem;
	UINavigationButton* _scaleModeButton;
	unsigned _desiredParts;
	unsigned _disabledParts;
	unsigned _visibleParts;
	unsigned _tvOutEnabled : 1;
	unsigned _wantsTick : 1;
	unsigned _allowsDetailScrubbing : 1;
	unsigned _detailScrubbing : 1;
}
@property(assign, nonatomic) unsigned desiredParts;
@property(assign, nonatomic) unsigned disabledParts;
@property(retain, nonatomic) MPItem* item;
@property(readonly, retain, nonatomic) UINavigationBar* navigationBar;
@property(assign, nonatomic) int interfaceOrientation;
@property(assign, nonatomic) id target;
@property(readonly, retain, nonatomic) MPFullScreenTransportControls* transportControls;
@property(assign, nonatomic) MPVideoViewController* videoController;
@property(assign, nonatomic) unsigned visibleParts;
@property(assign, nonatomic) BOOL allowsDetailScrubbing;
@property(assign, nonatomic) BOOL TVOutEnabled;
-(instancetype)initWithFrame:(CGRect)frame interfaceOrientation:(int)orientation;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)reloadNavigationBarWithAnimation:(BOOL)animation;
-(void)restoreSanity;
-(void)startTicking;
-(void)stopTicking;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;
-(void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;
-(void)_backButtonAction:(id)action;
-(void)_scaleButtonAction:(id)action;
-(void)_tickNotification:(id)notification;
-(void)_validityChangedNotification:(id)notification;
-(void)_statusBarHeightChanged:(id)changed;
-(void)_bufferingStateDidChange:(id)_bufferingState;
-(void)detailSliderTrackingDidBegin:(id)detailSliderTracking;
-(void)detailSliderTrackingDidEnd:(id)detailSliderTracking;
-(void)detailSliderTrackingDidCancel:(id)detailSliderTracking;
-(void)detailSlider:(id)slider didChangeValue:(float)value;
-(void)detailSlider:(id)slider didChangeScrubSpeed:(int)speed;
-(id)_loadingMovieIndicatorView;
-(void)_initNavigationBar;
-(void)_reloadTransportControls:(BOOL)controls;
-(id)_scrubControlWithFrame:(CGRect)frame;
-(void)_updateScrubControlWithAnimation:(BOOL)animation;
-(void)_updateTimeBasedValues;
-(void)_showScrubInstructions;
-(void)_hideScrubInstructions;
@end

