//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAContext.h>

#import "WAUpgradeCallback-Protocol.h"

@class CNContactStore, NSString, WAAlertViewWatchdogObserver, WABadgeController, WAChatManager, WAChatMessageCountLogger, WACloudKitManager, WAFontAssetManager, WAGIFActivityManager, WALiveLocationController, WALocationStorage, WAMediaUploader, WAMessageMediaDownloader, WAMessageNotificationCenter, WAMessagingService, WANotificationHandler, WAPaymentManager, WAPaymentSettings, WAPaymentUPIManager, WAPrimaryNetworkUsageManager, WARageShakeController, WARankingManager, WARegularThumbnailDownloadManager, WAReportProductPersistentRequestController, WASMBManagerMain, WASpotlightManager, WAStatusAdsManager, WAStreamingMediaLoaderManager, WASyncManager, XMPPConnectionMain;

__attribute__((visibility("hidden")))
@interface WAContextMain : WAContext <WAUpgradeCallback>
{
    _Bool _isAppContainerPrepared;
    WAPrimaryNetworkUsageManager *_primaryNetworkUsageManager;
    WAAlertViewWatchdogObserver *_alertViewWatchdog;
    WAMediaUploader *_mediaUploader;
    WASpotlightManager *_spotlightManager;
    WACloudKitManager *_cloudKitManager;
    CNContactStore *_contactStore;
    WAReportProductPersistentRequestController *_reportProductPersistentRequestController;
    WALocationStorage *_locationStorage;
    WAGIFActivityManager *_gifActivityManager;
    WAChatMessageCountLogger *_chatMessageCountLogger;
    WAMessageNotificationCenter *_messageNotificationCenter;
    WANotificationHandler *_notificationHandler;
    WARankingManager *_rankingManager;
    WABadgeController *_badgeController;
    WARageShakeController *_rageShakeController;
    WASyncManager *_syncManager;
    WAMessagingService *_messagingService;
    WAStreamingMediaLoaderManager *_streamingMediaLoaderManager;
    WAMessageMediaDownloader *_messageMediaDownloader;
    WARegularThumbnailDownloadManager *_regularThumbnailDownloadManager;
    WAChatManager *_chatManager;
    WALiveLocationController *_liveLocationController;
    WAFontAssetManager *_fontAssetManager;
    WAStatusAdsManager *_statusAdsManager;
    WAPaymentManager *_paymentManager;
    WAPaymentSettings *_paymentSettings;
}

+ (void)wa_didUpgradeFrom:(id)arg1 to:(id)arg2;
@property(readonly, nonatomic) WAPaymentSettings *paymentSettings; // @synthesize paymentSettings=_paymentSettings;
@property(readonly, nonatomic) WAPaymentManager *paymentManager; // @synthesize paymentManager=_paymentManager;
@property(readonly, nonatomic) WAStatusAdsManager *statusAdsManager; // @synthesize statusAdsManager=_statusAdsManager;
@property(readonly, nonatomic) WAFontAssetManager *fontAssetManager; // @synthesize fontAssetManager=_fontAssetManager;
@property(readonly, nonatomic) WALiveLocationController *liveLocationController; // @synthesize liveLocationController=_liveLocationController;
@property(readonly, nonatomic) WAChatManager *chatManager; // @synthesize chatManager=_chatManager;
@property(readonly, nonatomic) WARegularThumbnailDownloadManager *regularThumbnailDownloadManager; // @synthesize regularThumbnailDownloadManager=_regularThumbnailDownloadManager;
@property(readonly, nonatomic) WAMessageMediaDownloader *messageMediaDownloader; // @synthesize messageMediaDownloader=_messageMediaDownloader;
@property(readonly, nonatomic) WAStreamingMediaLoaderManager *streamingMediaLoaderManager; // @synthesize streamingMediaLoaderManager=_streamingMediaLoaderManager;
@property(readonly, nonatomic) WAMessagingService *messagingService; // @synthesize messagingService=_messagingService;
@property(readonly, nonatomic) WASyncManager *syncManager; // @synthesize syncManager=_syncManager;
@property(readonly, nonatomic) WARageShakeController *rageShakeController; // @synthesize rageShakeController=_rageShakeController;
@property(readonly, nonatomic) WABadgeController *badgeController; // @synthesize badgeController=_badgeController;
@property(readonly, nonatomic) WARankingManager *rankingManager; // @synthesize rankingManager=_rankingManager;
@property(readonly, nonatomic) WANotificationHandler *notificationHandler; // @synthesize notificationHandler=_notificationHandler;
@property(readonly, nonatomic) WAMessageNotificationCenter *messageNotificationCenter; // @synthesize messageNotificationCenter=_messageNotificationCenter;
@property(readonly, nonatomic) WAChatMessageCountLogger *chatMessageCountLogger; // @synthesize chatMessageCountLogger=_chatMessageCountLogger;
@property(readonly, nonatomic) WAGIFActivityManager *gifActivityManager; // @synthesize gifActivityManager=_gifActivityManager;
@property(readonly, nonatomic) WALocationStorage *locationStorage; // @synthesize locationStorage=_locationStorage;
- (void).cxx_destruct;
- (void)showDeferredNotificationsIfPossible;
- (void)reportCriticallyLowStorage;
- (void)setNeedsUpdateServerOfReadReceiptsState;
- (void)syncReadReceiptsStateWithServerIfNecessary;
@property(nonatomic, getter=isReadReceiptsEnabled) _Bool readReceiptsEnabled; // @dynamic readReceiptsEnabled;
- (void)migrateMediaToSharedAppContainer;
- (void)migrateUserPreferences;
- (void)migrateDataToSharedAppContainer;
- (void)createMediaDirectoryPathIfNotExist;
- (_Bool)prepareAppContainer;
- (void)createDeviceRestoreMarkerIfNeeded;
- (void)createDeviceRestoreMarker;
- (id)deviceRestoreMarkerInMainContainer;
- (id)deviceRestoreMarkerInAppGroup;
@property(readonly, nonatomic) NSString *deviceRestoreMarkerFilePath;
- (_Bool)isWebClientAvailable;
- (_Bool)isUserAvailable;
- (_Bool)isVOIPVideoCall;
- (_Bool)isVOIPCallActive;
- (_Bool)hasVOIPCallStarted;
- (void)registerConnectionConditionalForChatStorageState;
- (void)contactStoreDidChange:(id)arg1;
- (id)contactStore;
@property(readonly, nonatomic) id cloudKitManager;
@property(readonly, nonatomic) WAPaymentUPIManager *paymentUPIManager;
- (void)reloadPayments;
- (id)mediaUploader;
- (void)createMediaUploader_REMOVE_AFTER_MOVING_MEDIA_UPLOADER_TO_CORE;
@property(readonly, nonatomic) WASMBManagerMain *smbManagerMain;
@property(readonly, nonatomic) XMPPConnectionMain *xmppConnectionMain;
- (id)spotlightManager;
- (void)setUpSpotlightManagerIfNeeded;
@property(readonly, nonatomic) WAPrimaryNetworkUsageManager *primaryNetworkUsageManager;
- (id)networkUsageManager;
- (void)setUpNetworkUsageManagerIfNeeded;
- (void)updateContextAfterPhoneNumberChange;
- (void)updateContextWithCurrentJID;
- (void)didReloadServerProperties:(id)arg1;
- (void)didSetUpGlobalState;
- (void)internalSetUpGlobalState;
- (void)reloadUserInterface;
- (void)automation_showTOSViewControllerForStage:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

