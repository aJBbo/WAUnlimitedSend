//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAStaticTableViewController.h>

#import "WAChangeNumberNotificationControllerDelegate-Protocol.h"
#import "WACountryPickerControllerDelegate-Protocol.h"
#import "WAPhoneNumberTextFieldDelegate-Protocol.h"

@class NSArray, NSString, WAChangeNumberNotificationController, WACountryInfo, WAOverlayView, WAPhoneNumberInputView, WATableRow;
@protocol WAChangeNumberInputControllerDelegate;

__attribute__((visibility("hidden")))
@interface WAChangeNumberInputController : WAStaticTableViewController <WAPhoneNumberTextFieldDelegate, WAChangeNumberNotificationControllerDelegate, WACountryPickerControllerDelegate>
{
    WATableRow *_rowOldCountry;
    WATableRow *_rowNewCountry;
    WATableRow *_rowOldPhoneNumber;
    WATableRow *_rowNewPhoneNumber;
    WAPhoneNumberInputView *_oldPhoneNumberInputView;
    WAPhoneNumberInputView *_newPhoneNumberInputView;
    WAOverlayView *_overlayView;
    _Bool _countryCodeWarningShown;
    NSArray *_notificationContacts;
    WAChangeNumberNotificationController *_changeNumberNotificationController;
    id <WAChangeNumberInputControllerDelegate> _delegate;
    WACountryInfo *_selectedCountryOld;
    WACountryInfo *_selectedCountryNew;
    NSString *_phoneNumberOld;
    NSString *_phoneNumberNew;
}

@property(copy, nonatomic) NSString *phoneNumberNew; // @synthesize phoneNumberNew=_phoneNumberNew;
@property(copy, nonatomic) NSString *phoneNumberOld; // @synthesize phoneNumberOld=_phoneNumberOld;
@property(retain, nonatomic) WACountryInfo *selectedCountryNew; // @synthesize selectedCountryNew=_selectedCountryNew;
@property(retain, nonatomic) WACountryInfo *selectedCountryOld; // @synthesize selectedCountryOld=_selectedCountryOld;
@property(nonatomic) __weak id <WAChangeNumberInputControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)deviceCheckFailedWithError:(id)arg1;
- (void)deviceCheckFinishedWithResult:(id)arg1;
- (void)phoneNumberTextFieldDidChange:(id)arg1;
- (void)phoneNumberTextFieldDidBeginEditing:(id)arg1;
- (void)changeNumberNotificationControllerDidFinish:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setUpTableView;
- (void)viewDidLoad;
- (void)countryPicker:(id)arg1 didSelectCountry:(id)arg2;
- (void)showCountryPickerWithTag:(int)arg1;
- (void)newCodeChangedAction:(id)arg1;
- (void)oldCodeChangedAction:(id)arg1;
- (void)nextAction:(id)arg1;
- (void)presentChangeNumberNetworkRequiredAlert;
- (void)presentChangeNumberFormatWarningAlert;
- (void)cancelAction:(id)arg1;
- (_Bool)needToShowPhoneNumberFormatWarning;
- (void)saveCurrentUserParametersAndLockVerificationState;
- (void)proceedToAuthCodeRequest;
- (void)proceedToTwoFactorInputWithResponse:(id)arg1;
- (void)showAppStoreAlert:(id)arg1;
- (void)showContactSupportAlert:(id)arg1 withContext:(id)arg2;
- (void)performSameDeviceCheck;
- (void)presentPhoneNumberDoesntMatchAlert;
- (void)presentCouldntConnectToServiceAlert;
- (void)validateOldPhoneNumber;
- (void)validateUserInput;
- (void)showOverlay:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

