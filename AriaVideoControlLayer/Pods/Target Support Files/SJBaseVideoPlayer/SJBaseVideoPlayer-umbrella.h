#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "SJBaseVideoPlayer+TestLog.h"
#import "SJBaseVideoPlayer.h"
#import "UIScrollView+ListViewAutoplaySJAdd.h"
#import "AVAsset+SJAVMediaExport.h"
#import "SJAVBasePlayer.h"
#import "SJAVBasePlayerItem.h"
#import "SJAVMediaPlayer.h"
#import "SJAVMediaPlayerDefinitionLoader.h"
#import "SJAVMediaPlayerLoader.h"
#import "SJAVMediaPresentController.h"
#import "SJAVMediaPresentView.h"
#import "SJVideoPlayerURLAssetPrefetcher.h"
#import "SJAVMediaPlaybackController.h"
#import "SJBaseVideoPlayerConst.h"
#import "SJVideoPlayerPlayStatusDefines.h"
#import "NSString+SJBaseVideoPlayerExtended.h"
#import "NSTimer+SJAssetAdd.h"
#import "SJBarrageItem.h"
#import "SJBarrageQueueController.h"
#import "SJControlLayerAppearStateManager.h"
#import "SJDeviceVolumeAndBrightnessManager.h"
#import "SJEdgeFastForwardViewController.h"
#import "SJFitOnScreenManager.h"
#import "SJFlipTransitionManager.h"
#import "SJFloatSmallViewController.h"
#import "SJPlaybackObservation.h"
#import "SJPlayerAutoplayConfig.h"
#import "SJPlayerView.h"
#import "SJPlayModel.h"
#import "SJPlayModelPropertiesObserver.h"
#import "SJPopPromptController.h"
#import "SJPrompt.h"
#import "SJReachability.h"
#import "SJRotationManager.h"
#import "SJSubtitleItem.h"
#import "SJSubtitlesPromptController.h"
#import "SJVideoDefinitionSwitchingInfo+Private.h"
#import "SJVideoDefinitionSwitchingInfo.h"
#import "SJVideoPlayerPresentView.h"
#import "SJVideoPlayerURLAsset+SJAVMediaPlaybackAdd.h"
#import "SJVideoPlayerURLAsset+SJSubtitlesAdd.h"
#import "SJVideoPlayerURLAsset.h"
#import "SJViewControllerManager.h"
#import "SJBarrageQueueControllerDefines.h"
#import "SJControlLayerAppearManagerDefines.h"
#import "SJDeviceVolumeAndBrightnessManagerDefines.h"
#import "SJEdgeFastForwardViewControllerDefines.h"
#import "SJFitOnScreenManagerDefines.h"
#import "SJFlipTransitionManagerDefines.h"
#import "SJFloatSmallViewControllerDefines.h"
#import "SJPlayerGestureControlDefines.h"
#import "SJPopPromptControllerDefines.h"
#import "SJPromptDefines.h"
#import "SJReachabilityDefines.h"
#import "SJRotationManagerDefines.h"
#import "SJSubtitlesPromptControllerDefines.h"
#import "SJVideoPlayerControlLayerProtocol.h"
#import "SJVideoPlayerPlaybackControllerDefines.h"
#import "SJVideoPlayerPresentViewDefines.h"
#import "SJViewControllerManagerDefines.h"
#import "CALayer+SJBaseVideoPlayerExtended.h"
#import "UIScrollView+SJBaseVideoPlayerExtended.h"
#import "UIView+SJBaseVideoPlayerExtended.h"
#import "UIViewController+SJBaseVideoPlayerExtended.h"
#import "SJTimerControl.h"
#import "SJVideoPlayerRegistrar.h"
#import "SJBaseVideoPlayerResourceLoader.h"

FOUNDATION_EXPORT double SJBaseVideoPlayerVersionNumber;
FOUNDATION_EXPORT const unsigned char SJBaseVideoPlayerVersionString[];

