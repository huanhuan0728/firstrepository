def make_album(singer_name, song_name, count = None):
    if count:
        album = {'singer_name': singer_name, 'song': song_name, 'song_count': count}
        return album

    single = {'singer_name': song_name, 'song': song_name}
    return single
