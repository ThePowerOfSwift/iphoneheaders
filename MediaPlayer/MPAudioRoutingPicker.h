/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIAlertView.h>

@class MPAudioDeviceController;

@interface MPAudioRoutingPicker : UIAlertView {
	MPAudioDeviceController* _audioDeviceController;
	BOOL _ignoringInteractionEvents;
}
-(instancetype)initWithAVController:(id)avcontroller;
-(void)setAVController:(id)controller;
-(void)dealloc;
-(void)pickRoute:(id)route;
-(void)audioDeviceControllerAudioRoutesChanged:(id)changed;
-(void)audioDeviceControllerMediaServerDied:(id)died;
-(int)numberOfRowsInTable:(id)table;
-(id)table:(id)table cellForRow:(int)row column:(id)column;
-(BOOL)table:(id)table canSelectRow:(int)row;
-(void)tableSelectionDidChange:(id)tableSelection;
-(void)willMoveToSuperview:(id)superview;
-(BOOL)requiresPortraitOrientation;
@end

