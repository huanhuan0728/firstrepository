def make_album(singer, song, song_count = None):
    if song_count:
        album = {'singer_name': singer, 'sing': song, 'song_count': song_count}
        return album

    single = {'singer_name': song, 'song': song}
    return single
