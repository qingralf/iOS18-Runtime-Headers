/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafetyMonitor.framework/SafetyMonitor
 */

@interface SMSafetyMonitorUtilities : NSObject

+ (id)carPlayGroupFallbackName;
+ (id)carPlayNotificationTypeToString:(unsigned long long)arg1;
+ (id)disabledConnectivityAlertDestinationMessage;
+ (id)disabledConnectivityAlertGenericMessage;
+ (id)disabledConnectivityAlertOKButton;
+ (id)disabledConnectivityAlertTitle;
+ (id)getCarPlayButtonActionIdentifierForNotificationType:(unsigned long long)arg1 sessionType:(unsigned long long)arg2 error:(id*)arg3;
+ (id)getCarPlayButtonTitleForNotificationType:(unsigned long long)arg1 sessionType:(unsigned long long)arg2 error:(id*)arg3;
+ (id)getCarPlayNotificationCategoryForNotificationType:(unsigned long long)arg1 sessionType:(unsigned long long)arg2 error:(id*)arg3;
+ (id)getCarPlayNotificationMessageForNotificationType:(unsigned long long)arg1 sessionType:(unsigned long long)arg2 contactName:(id)arg3 cacheReleaseDate:(id)arg4 error:(id*)arg5;
+ (id)getCarPlayNotificationTitleForNotificationType:(unsigned long long)arg1 sessionType:(unsigned long long)arg2 contactName:(id)arg3 error:(id*)arg4;
+ (id)getSuggestionBodyWithPlaceInference:(id)arg1;
+ (id)getSuggestionFooter;
+ (id)getSuggestionTitleWithContactName:(id)arg1;
+ (id)getSuggestionTitleWithoutContactName;
+ (id)magnetBreakNotificationMessage;
+ (id)magnetBreakNotificationTitle;
+ (id)safeArrivalMessageWithCustomizedSummaryForDestination:(id)arg1;
+ (id)workoutAlwaysPromptActionTitle;
+ (id)workoutAlwaysPromptBody;

@end
