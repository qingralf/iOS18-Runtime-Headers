/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
 */

@interface _SVXAddViewsExpressionParser : _SVXExpressionParser {
    bool  _ignoresLocallyParseableExpressions;
    SVXAFSpeakableUtteranceParserProvider * _speakableUtteranceParserProvider;
}

@property (nonatomic) bool ignoresLocallyParseableExpressions;

- (void).cxx_destruct;
- (id)_parseViews:(id)arg1 addViews:(id)arg2 aceViewByAceId:(id)arg3 aceIdByParseableExpressionIds:(id)arg4;
- (id)_prepareParsingModelWithAddViews:(id)arg1;
- (bool)ignoresLocallyParseableExpressions;
- (id)initWithParsingService:(id)arg1 preferences:(id)arg2;
- (void)parseAddViews:(id)arg1 reply:(id /* block */)arg2;
- (void)setIgnoresLocallyParseableExpressions:(bool)arg1;

@end