def solution(s: str) -> list:
	return [s[se:se+2] if len(s[se:se+2]) % 2 == 0 else s[se]+'_' for se in range(0, len(s), 2)]