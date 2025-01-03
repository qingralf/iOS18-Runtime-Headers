/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Security.framework/Security
 */

@interface SFAnalyticsMatchingRule : NSObject {
    NSString * _eventName;
    bool  _firstMatchArmed;
    NSDate * _lastMatch;
    NSDictionary * _matchingDictionary;
    SECSFAEventRule * _rule;
}

@property (retain) NSString *eventName;
@property bool firstMatchArmed;
@property (retain) NSDate *lastMatch;
@property (retain) NSDictionary *matchingDictionary;
@property (retain) SECSFAEventRule *rule;

+ (id)armKeyForEventName:(id)arg1;

- (void).cxx_destruct;
- (id)armKey;
- (id)cachedMatchDictionary;
- (id)description;
- (unsigned int)doAction:(id)arg1 attributes:(id)arg2 logger:(id)arg3;
- (id)eventName;
- (bool)firstMatchArmed;
- (id)initWithSFARule:(id)arg1 logger:(id)arg2;
- (bool)isSubsetMatch:(id)arg1 target:(id)arg2;
- (id)lastMatch;
- (id)lastMatchTimeKey;
- (bool)matchAttributes:(id)arg1 eventClass:(long long)arg2 processName:(id)arg3 logger:(id)arg4;
- (id)matchingDictionary;
- (id)rule;
- (void)setEventName:(id)arg1;
- (void)setFirstMatchArmed:(bool)arg1;
- (void)setLastMatch:(id)arg1;
- (void)setMatchingDictionary:(id)arg1;
- (void)setRule:(id)arg1;
- (bool)valueMatch:(id)arg1 target:(id)arg2;

@end
