//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WADataFormatters : NSObject
{
}

+ (id)paymentMonthAndYearFromDate:(id)arg1;
+ (id)paymentMonthFormatter;
+ (id)formattedTextForPhotoAndVideoCount:(long long)arg1;
+ (id)formattedTextForVideoCount:(long long)arg1;
+ (id)formattedTextForPhotoCount:(long long)arg1;
+ (id)backupSizeStringFromLongLong:(long long)arg1;
+ (id)sizeStringFromLongLong:(long long)arg1;
+ (id)localizedPageCountStringForMIMEType:(id)arg1 pageCount:(long long)arg2;
+ (id)localizedStringWithFormat:(id)arg1 numberFormatter:(id)arg2 number:(id)arg3 formatSpecifier:(id)arg4 arguments:(char *)arg5;
+ (id)localizedStringWithFormat:(id)arg1 numberFormatter:(id)arg2 number:(id)arg3 formatSpecifier:(id)arg4;
+ (id)localizedStringWithFormat:(id)arg1 number:(id)arg2 formatSpecifier:(id)arg3;
+ (id)localizedStringWithFormat:(id)arg1 number:(id)arg2;
+ (id)voiceOverStringForDurationInSeconds:(double)arg1;
+ (id)longStyleStringFromTimeInterval:(double)arg1;
+ (id)legacyLongStyleStringFromTimeInterval:(double)arg1 withSeconds:(_Bool)arg2;
+ (id)longStyleStringFromTimeInterval:(double)arg1 withSeconds:(_Bool)arg2;
+ (id)shortStyleStringFromTimeInterval:(double)arg1 options:(unsigned long long)arg2;
+ (id)callDurationStringFromTimeInterval:(double)arg1;
+ (id)mediaDurationStringFromTimeInterval:(double)arg1;
+ (id)pluralDays:(long long)arg1;
+ (id)pluralHours:(long long)arg1;
+ (id)pluralMinutes:(long long)arg1;
+ (id)pluralSeconds:(long long)arg1;
+ (long long)yearFromDate:(id)arg1;
+ (id)dayOfTheWeekFromDate:(id)arg1;
+ (id)messageTimestampStringFromDate:(id)arg1;
+ (id)liveLocationTimeFromDate:(id)arg1;
+ (id)fullWeekdayFormatter;
+ (id)dateFormatterMediumStyleNoYear;
+ (id)sharedCalendar;
+ (id)shortWeekdayFormatter;
+ (id)messageTimestampFormatter;
+ (id)dateTimeFormatterLongStyleNoYearNoTime;
+ (id)dateTimeFormatterLongStyleNoYear;
+ (id)dateTimeFormatterMediumStyleNoYear;
+ (id)dateTimeFormatterLongStyleNoTime;
+ (id)dateTimeFormatterLongStyle;
+ (id)dateTimeFormatter;
+ (id)timeFormatter;
+ (id)dateFormatterMediumStyle;
+ (id)dateFormatterShortStyle;
+ (id)dateFormatterMonthAndDay;
+ (id)numberFormatter;
+ (void)handleSignificantTimeChange:(id)arg1;
+ (void)currentLocaleDidChange:(id)arg1;
+ (void)initialize;
+ (id)localizedNameList:(id)arg1;
+ (id)localizedNameListThreeOrMoreItems:(id)arg1 secondItem:(id)arg2 additionalMiddleItems:(id)arg3 lastItem:(id)arg4;
+ (id)localizedNameListWithTwoItems:(id)arg1 secondItem:(id)arg2;
+ (id)timeLeftStringFromTimeInterval:(double)arg1;
+ (id)updatedAgoStringFromTimeInterval:(double)arg1 extraPrecision:(_Bool)arg2;
+ (id)agoStringFromTimeInterval:(double)arg1 extraPrecision:(_Bool)arg2;
+ (id)messageDateStringFromDate:(id)arg1;
+ (id)dateTimeStringFromDate:(id)arg1;
+ (id)chatTimestampFromDate:(id)arg1;
+ (id)aboutUpdateTimestampStringFromDate:(id)arg1 forVoiceOver:(_Bool)arg2;
+ (id)lastActiveStringFromDate:(id)arg1;
+ (id)lastSeenStringFromDate:(id)arg1;
+ (id)stringWithCorrectedDateTimePreposition:(id)arg1;

@end

